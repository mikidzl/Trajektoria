#include "statystyki.h"
#include "ui_statystyki.h"

statystyki::statystyki(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statystyki)
{
    connect(parent,SIGNAL(przeslij_liste(Punkt*)),this,SLOT(przyjmij_liste(Punkt*)));
    ui->setupUi(this);
    wykres_x= new QLabel;

}

statystyki::~statystyki()
{
    delete ui;
}

void statystyki::przyjmij_liste(Punkt *g)
{
    p=g;
    aktualizuj_staty(p);
}

void statystyki::aktualizuj_staty(Punkt *p)
{
    t=czas(p);
    maxV = max_v(p);
    if(wykres_x->isVisible())
    {
        wykres_rys=rysuj_wykres(p,500,400);
        wykres_x->setPixmap(wykres_rys);
    }

    QString vmax= QString::number(round(100*maxV)/100);
    ui->vMax->setText(vmax+"m/s");

    QString xKon = QString::number(round(100*x_kon(p))/100);
    ui->xKon->setText(xKon+"m");

    QString cz = QString::number(round(100*t)/100);
    ui->czasLotu->setText(cz+"s");

    QString maxy = QString::number(round(100*max_y(p))/100);
    ui->ymax->setText(maxy+"m");

}

void statystyki::pokaz_wykres(Punkt *p)
{
    int size_x=500;
    int size_y=400;

    wykres_rys=rysuj_wykres(p,size_x,size_y);

    wykres_x->move(700,400);
    wykres_x->setWindowTitle("Wykres prędkości");
    wykres_x->setWindowIcon(QIcon("ikona.png"));
    wykres_x->setMinimumSize(size_x,size_y);
    wykres_x->setMaximumSize(size_x,size_y);
    wykres_x->setPixmap(wykres_rys);

    wykres_x->show();
}

void statystyki::on_pB_wykres_clicked()
{
    pokaz_wykres(p);
}

QPixmap statystyki::rysuj_wykres(Punkt *p, int size_x, int size_y)
{
    int a = 25;
    int b = 5;          //odleglosc od krawedzi
    int c = 3;          //szerkosc grota
    int d = 10;         //dlugosc grota
    double skok=0.01;


    QImage wykres(size_x,size_y,QImage::Format_RGB32);

    wykres.fill(Qt::white);

    double skalaT=(size_x-2*a)/t;
    double kT=1;

    double skalaV=(size_y-2*a)/maxV;
    double kV=1;

    if(t<2)
        kT=0.2;

    int i=0;

    QPainter krzywa;
    krzywa.begin(&wykres);
    krzywa.setPen(Qt::black);
    krzywa.setRenderHint(QPainter::Antialiasing);

    while(p->n != 0)
    {
        double x1=a+i*skok*skalaT;
        double y1=size_y-a-hypot(p->vx,p->vy)*skalaV;
        double x2=a+(i+1)*skok*skalaT;
        double y2=size_y-a-hypot(p->n->vx,p->n->vy)*skalaV;

        krzywa.drawLine(x1,y1,x2,y2);
        i++;
        p=p->n;
    }
    krzywa.end();


    QPointF grotX[3] = {
        QPointF(size_x-b,size_y-a),
        QPointF(size_x-b-d,size_y-a+c),
        QPointF(size_x-b-d,size_y-a-c)
    };

    QPainter osX;
    osX.begin(&wykres);
    osX.setPen(Qt::black);
    osX.setBrush(Qt::black);
    osX.drawLine(b,size_y-a,size_x-b,size_y-a);
    for(double i=a+kT*skalaT; i<size_x-20; i=i+kT*skalaT)
    {
        double j;
        osX.drawLine(i,size_y-a-5,i,size_y-a+5);
        if(size_x-50> i)
        {
            j = (i-a)/skalaT;
            QString s= QString::number(j);
            osX.drawText(i+2,size_y-a+15,s);
        }
    }
    osX.setRenderHint(QPainter::Antialiasing);
    osX.drawPolygon(grotX,3);
    osX.drawText(size_x-23,size_y-5,"t[s]");
    osX.end();


    QPointF grotY[3] = {
        QPointF(a,b),
        QPointF(a-c,b+d),
        QPointF(a+c,b+d)
    };

    QPainter osY;
    osY.begin(&wykres);
    osY.setPen(Qt::black);
    osY.setBrush(Qt::black);
    osY.drawLine(a,size_y-b,a,b);
    for(double i=size_y-a-kV*skalaV; i>20; i=i-kV*skalaV)
    {
        double j;
        osY.drawLine(a-5,i,a+5,i);
        if(i > 50)
        {
            j = (size_y-a-i)/skalaV;
            QString s= QString::number(j);
            osY.drawText(a-15,i+5,s);
        }
    }
    osY.setRenderHint(QPainter::Antialiasing);
    osY.drawPolygon(grotY,3);
    osY.rotate(-90);
    osY.drawText(-45,15,"v[m/s]");
    osY.end();



//    int poz_x=this->mapToParent(this->pos()).x() + 100;
//    int poz_y=this->mapToParent(this->pos()).y();

    return QPixmap::fromImage(wykres);

}
