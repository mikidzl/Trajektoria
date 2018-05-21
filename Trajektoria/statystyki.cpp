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

void statystyki::aktualizuj_staty(Punkt *p)
{

    QString vmax= QString::number(round(100*max_v(p))/100);
    ui->vMax->setText(vmax+"m/s");

    QString xKon = QString::number(round(100*x_kon(p))/100);
    ui->xKon->setText(xKon+"m");

}
