#include "pokaz_traj.h"
#include "ui_pokaz_traj.h"

pokazTraj::pokazTraj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pokaz_traj)
{   
    connect(parent,SIGNAL(przeslij_liste(Punkt*)),this,SLOT(zrob_trajektorie(Punkt*)));

    ui->setupUi(this);


}

pokazTraj::~pokazTraj()
{
    delete ui;
}

void pokazTraj::zrob_trajektorie(Punkt *p)
{
    obraz = tworzObraz(p,640,480);

    ui->label->setPixmap(obraz);

}
