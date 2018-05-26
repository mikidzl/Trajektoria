#include "obraz.h"

QPixmap tworzObraz(Punkt *p, int size_x, int size_y)
{
    QImage obraz(size_x, size_y, QImage::Format_RGB32);

    QRgb kolor_tla = qRgb(255,255,255);

    int a=25;           //odległość od krawędzi obrazu


    obraz.fill(kolor_tla);

    rysujSiatka(obraz,p,size_x,size_y,a);

    //trawka(obraz,a,size_x,size_y);
    slonko(obraz);


    rysujOsie(obraz,p,size_x,size_y,a);


    rysujTrajektorie(obraz,p,size_x,size_y,a);

    //wybuch(obraz,p,size_x,size_y,a);




    obraz.setText("Description","Dziala");
    obraz.save("image.bmp","BMP",-1);


    return QPixmap::fromImage(obraz);
}


void trawka(QImage &obraz, int ziemia, int size_x, int size_y)
{
    QRgb kolor_trawy = qRgb(0, 177, 51);
    QRgb kolor_ziemi = qRgb(0,0,0);

    for(int i=0; i<size_x-1; i++)
        for(int j=size_y-1; j>size_y-ziemia-1; j--)
            obraz.setPixel(i,j,kolor_trawy);
    for(int i=0; i<size_x-1; i++)
        obraz.setPixel(i,size_y-ziemia,kolor_ziemi);
}

void slonko(QImage &obraz)
{
    QRectF rectangle(-101, -101, 199, 199);
    int startAngle = 270 * 16;
    int spanAngle = 90 * 16;

    QPainter paint;
    paint.begin(&obraz);
    paint.setRenderHint(QPainter::Antialiasing);
    paint.setPen(Qt::black);
    paint.setBrush(Qt::yellow);
    paint.drawPie(rectangle, startAngle, spanAngle);
    paint.end();
}


void rysujTrajektorie(QImage &obraz,Punkt *p, int size_x, int size_y, int a)
{
    double minX,maxX,maxY;

    QRgb kolor_krzywej = qRgb(0,0,0);

    minX=min_x(p);              // skrajne punkty trajektorii do przeskalowania obrazu
    maxX=max_x(p);
    maxY=max_y(p);

    if(proporcje(maxX+minX,maxY,size_x,size_y))
    {
        while(p->n!=0)
        {
            double x1=a+double((p->x+minX)/(maxX+minX)*(size_x-2*a));          //rasteryzacja i przeskalowanie
            double y1=double(size_y-a-p->y/(maxX+minX)*(size_x-2*a));
            double x2=a+double(((p->n->x)+minX)/(maxX+minX)*(size_x-2*a));          //rasteryzacja i przeskalowanie
            double y2=double(size_y-a-(p->n->y)/(maxX+minX)*(size_x-2*a));


            QPainter traj;
            traj.begin(&obraz);
            traj.setRenderHint(QPainter::Antialiasing);
            traj.setPen(kolor_krzywej);
            traj.drawLine(x1,y1,x2,y2);
            traj.end();

            p=p->n;
        }
    }
    else
    {

        while(p->n!=0)
        {
            double x1=a+int((p->x+minX)/maxY*(size_y-2*a));
            double y1=int((size_y-2*a)*(1-(p->y)/(maxY)))+a;
            double x2=a+int((p->n->x+minX)/maxY*(size_y-2*a));
            double y2=int((size_y-2*a)*(1-(p->n->y)/(maxY)))+a;


            QPainter traj;
            traj.begin(&obraz);
            traj.setRenderHint(QPainter::Antialiasing);
            traj.setPen(kolor_krzywej);
            traj.drawLine(x1,y1,x2,y2);
            traj.end();

            p=p->n;
        }
    }
}


bool proporcje(double x, double y, int size_x, int size_y)
{
    if(x*size_y > y*size_x)
        return true;
    else
    {
        return false;
    }
}


void rysujOsie(QImage &obraz, Punkt *p, int size_x, int size_y, int a)
{
    int b = 5;          //odleglosc od krawedzi
    int c = 3;          //szerkosc grota
    int d = 10;         //dlugosc grota
    int x0=a;
    double k=1;            //podzialka
    double skala=(size_x-2*a)/10;


    if(p!=0)
    {
        double minX,maxX,maxY;

        minX=min_x(p);          // skrajne punkty trajektorii do przeskalowania osi
        maxX=max_x(p);
        maxY=max_y(p);


        if( minX+maxX < 2  && maxY < 2)             //dobranie podziałki do zakresu
            k=0.2;
        if( minX+maxX < 1  && maxY < 1)
            k=0.1;

        if( minX+maxX >= 20  || maxY >= 20)
            k=5;
        if( minX+maxX >= 50  || maxY >= 50)
            k=10;
        if(minX+maxX >= 100 || maxY >= 100)
            k=20;
        if(minX+maxX >= 200 || maxY >= 200)
            k=50;
        if(minX+maxX >= 400 || maxY >= 400)
            k=100;
        if(minX+maxX >= 800 || maxY >= 800)
            k=200;
        if(minX+maxX >= 1600 || maxY >= 1600)
            k=500;
        if(minX+maxX >= 3200 || maxY >= 3200)
            k=1000;

        if(proporcje(maxX+minX,maxY,size_x,size_y))
        {
            skala=(size_x-2*a)/(maxX+minX);
            x0=a+int(minX/(maxX+minX)*(size_x-2*a));
        }
        else
        {
            skala=(size_y-2*a)/maxY;
            x0=a+int((minX)/maxY*(size_y-2*a));
        }


        QPointF grotX[3] = {
            QPointF(size_x-b,size_y-a),
            QPointF(size_x-b-d,size_y-a+c),
            QPointF(size_x-b-d,size_y-a-c)
        };

        QPainter osX;
        osX.begin(&obraz);
        osX.setPen(Qt::black);
        osX.setBrush(Qt::black);
        osX.drawLine(b,size_y-a,size_x-b,size_y-a);

        for(double i =fmod(x0,k*skala); i<size_x-20; i=i+skala*k)
        {
            double j;
            osX.drawLine(i,size_y-a+c,i,size_y-a-c);
            if(size_x-50> i)
            {
                j = ((i-x0)/skala);
                if(fabs(j) < 0.1)
                    j=0;
                QString s= QString::number(j);
                osX.drawText(i+2,size_y-a+15,s);
            }

        }
        osX.drawLine(b,size_y-a,size_x-b,size_y-a);
        osX.drawText(size_x-30,size_y-a+20,"x[m]");
        osX.setRenderHint(QPainter::Antialiasing);
        osX.drawPolygon(grotX,3);
        osX.end();


        QPointF grotY[3] = {
            QPointF(x0,b),
            QPointF(x0-c,b+d),
            QPointF(x0+c,b+d)
        };

        QPainter osY;
        osY.begin(&obraz);
        osY.setPen(Qt::black);
        osY.setBrush(Qt::black);
        osY.drawLine(x0,size_y-b,x0,b);
        for(double i = size_y-a; i>20; i=i-skala*k)
        {
            double j;
            osY.drawLine(x0-c,i,x0+c,i);
            if(i > 30) //&& l%2 == 0)
            {
                j = (size_y-a-i)/skala;
                QString s= QString::number(j);
                if(j>=9.9 && j<100)
                    osY.drawText(x0-16,i-2,s);
                else if(j>=99.9 && j<1000)
                    osY.drawText(x0-21,i-2,s);
                else if(j>999.9)
                    osY.drawText(x0-26,i-2,s);
                else
                {
                    osY.drawText(x0-10,i-2,s);
                }
            }
        }
        osY.drawText(x0-15,15,"y");
        osY.setRenderHint(QPainter::Antialiasing);
        osY.drawPolygon(grotY,3);
        osY.end();
    }

    else
    {
        x0=10;
        QPointF grotX[3] = {
            QPointF(size_x-b,size_y-a),
            QPointF(size_x-b-d,size_y-a+c),
            QPointF(size_x-b-d,size_y-a-c)
        };

        QPainter osX;
        osX.begin(&obraz);
        osX.setPen(Qt::black);
        osX.setBrush(Qt::black);
        osX.drawPolygon(grotX,3);
        osX.drawLine(b,size_y-a,size_x-b,size_y-a);

        for(double i =fmod(x0,k*skala); i<size_x-20; i=i+skala*k)
        {
            double j;
            osX.drawLine(i,size_y-a+c,i,size_y-a-c);
            if(size_x-50> i)
            {
                j = ((i-x0)/skala);
                if(fabs(j) < 0.1)
                    j=0;
                QString s= QString::number(j);
                osX.drawText(i+2,size_y-a+15,s);
            }

        }
        osX.drawText(size_x-30,size_y-a+20,"x[m]");
        osX.end();

        QPointF grotY[3] = {
            QPointF(x0,b),
            QPointF(x0-c,b+d),
            QPointF(x0+c,b+d)
        };

        QPainter osY;
        osY.begin(&obraz);
        osY.setPen(Qt::black);
        osY.setBrush(Qt::black);
        osY.drawPolygon(grotY,3);
        osY.drawLine(x0,size_y-b,x0,b);
        for(double i = size_y-a; i>20; i=i-skala*k)
        {
            double j;
            osY.drawLine(x0-c,i,x0+c,i);
            if(i > 30) //&& l%2 == 0)
            {
                j = (size_y-a-i)/skala;
                QString s= QString::number(j);
                if(j>=9 && j<100)
                    osY.drawText(x0-16,i-2,s);
                else if(j>=95 && j<1000)
                    osY.drawText(x0-21,i-2,s);
                else if(j>999)
                    osY.drawText(x0-26,i-2,s);
                else
                {
                    osY.drawText(x0-10,i-2,s);
                }
            }
        }
        osY.drawText(x0-15,15,"y");
        osY.end();
    }
}


void rysujSiatka(QImage &obraz,Punkt *p, int size_x, int size_y, int a)
{
    double maxX,minX,maxY;

    int g=220;
    QRgb kolor_siatki=qRgb(g,g,g);

    maxX=max_x(p);
    maxY=max_y(p);
    minX=min_x(p);

    double skala;
    int x0;
    double k=1;            //podziałka

    if( minX+maxX <2 && maxY < 2)
        k=0.2;
    if( minX+maxX < 1  && maxY < 1)
        k=0.1;

    if( minX+maxX >= 20  || maxY >= 20)
        k=5;
    if( minX+maxX >= 50  || maxY >= 50)
        k=10;
    if(minX+maxX >= 100 || maxY >= 100)
        k=20;
    if(minX+maxX >= 200 || maxY >= 200)
        k=50;
    if(minX+maxX >= 400 || maxY >= 400)
        k=100;
    if(minX+maxX >= 800 || maxY >= 800)
        k=200;
    if(minX+maxX >= 1600 || maxY >= 1600)
        k=500;
    if(minX+maxX >= 3200 || maxY >= 3200)
        k=1000;


    if(proporcje(maxX+minX,maxY,size_x,size_y))
    {
        skala=(size_x-2*a)/(maxX+minX);
        x0=a+int(minX/(maxX+minX)*(size_x-2*a));
    }
    else
    {
        skala=(size_y-2*a)/maxY;
        x0=a+int((minX)/maxY*(size_y-2*a));
    }

    QPainter siatka;
    siatka.begin(&obraz);
    siatka.setPen(kolor_siatki);
    for(double i=fmod(x0,k*skala); i<size_x-1; i=i+k*skala)
        siatka.drawLine(i,0,i,size_y);
    for(double i=size_y-a; i>0; i=i-k*skala)
        siatka.drawLine(0,i,size_x-1,i);
    siatka.end();
}


void wybuch(QImage &obraz, Punkt *p, int size_x, int size_y, int a)
{
    double maxX,minX,maxY;
    double x=0;
    int r=10;

    maxX=max_x(p);
    maxY=max_y(p);
    minX=min_x(p);

    while(p->n != 0)
    {
        p=p->n;
    }

    if(proporcje(maxX+minX,maxY,size_x,size_y))
    {
        x=a+int((minX+p->x)/(maxX+minX)*(size_x-2*a));
    }
    else
    {
        x=a+int((minX+p->x)/maxY*(size_y-2*a));
    }


    QRectF rectangle(x-r-2, size_y-a-r, 2*r,2*r);
    int startAngle = 0 * 16;
    int spanAngle = 180 * 16;

    QPainter wybuch;
    wybuch.begin(&obraz);
    wybuch.setPen(Qt::black);
    wybuch.setBrush(Qt::yellow);
    wybuch.drawPie(rectangle,startAngle,spanAngle);
    wybuch.end();
}
