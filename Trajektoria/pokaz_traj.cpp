#include "pokaz_traj.h"
#include "ui_pokaz_traj.h"

pokazTraj::pokazTraj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pokaz_traj)
{   
    connect(parent,SIGNAL(przeslij_liste(Punkt*)),this,SLOT(zrob_trajektorie(Punkt*)));

    ui->setupUi(this);

    nazwa = "trajektoria";
}

pokazTraj::~pokazTraj()
{
    delete ui;
}

void pokazTraj::zrob_trajektorie(Punkt *p)
{
    obraz = tworzObraz(p,640,480);

    ui->label_trajektoria->setPixmap(obraz);

}

void pokazTraj::on_pB_zapisz_clicked()
{
    nazwa = ui->line_nazwa->text();
    obraz.save(nazwa+".bmp","BMP",-1);
}
