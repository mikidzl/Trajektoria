#include "statystyki.h"
#include "ui_statystyki.h"

statystyki::statystyki(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statystyki)
{
    connect(parent,SIGNAL(przeslij_liste(Punkt*)),this,SLOT(aktualizuj_staty(Punkt*)));
    ui->setupUi(this);

}

statystyki::~statystyki()
{
    delete ui;
}

void statystyki::przyjmij_liste(Punkt *g)
{
    p=g;
}

void statystyki::aktualizuj_staty(Punkt *p)
{
    t=czas(p);

    QString vmax= QString::number(round(100*max_v(p))/100);
    ui->vMax->setText(vmax+"m/s");

    QString xKon = QString::number(round(100*x_kon(p))/100);
    ui->xKon->setText(xKon+"m");

    QString cz = QString::number(round(100*t)/100);
    ui->czasLotu->setText(cz);


}

void statystyki::pokaz_wykres(Punkt *p)
{
    int size_x=500;
    int size_y=400;

    QLabel *wykres_x= new QLabel;

    QPixmap wykres=rysuj_wykres(p,size_x,size_y);

    wykres_x->move(700,400);
    wykres_x->setWindowTitle("Wykres prędkości");
    wykres_x->setWindowIcon(QIcon("ikona.png"));
    wykres_x->setMinimumSize(size_x,size_y);
    wykres_x->setMaximumSize(size_x,size_y);
    wykres_x->setPixmap(wykres);

    wykres_x->show();
}

void statystyki::on_pB_wykres_clicked()
{
    pokaz_wykres(p);
}

QPixmap statystyki::rysuj_wykres(Punkt *p, int size_x, int size_y)
{
    double skok=0.01;

    QImage wykres(size_x,size_y,QImage::Format_RGB32);

    wykres.fill(Qt::white);

    int a = 25;
    int b = 5;          //odleglosc od krawedzi
    int c = 3;          //szerkosc grota
    int d = 10;         //dlugosc grota


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
    osX.setRenderHint(QPainter::Antialiasing);
    osX.drawPolygon(grotX,3);
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
    osY.setRenderHint(QPainter::Antialiasing);
    osY.drawPolygon(grotY,3);
    osY.rotate(-90);
    osY.drawText(-45,15,"y[m/s]");
    osY.end();



//    int poz_x=this->mapToParent(this->pos()).x() + 100;
//    int poz_y=this->mapToParent(this->pos()).y();

    return QPixmap::fromImage(wykres);

}
