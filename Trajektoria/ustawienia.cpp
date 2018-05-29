#include "ustawienia.h"
#include "ui_ustawienia.h"

ustawienia::ustawienia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ustawienia)
{
    ui->setupUi(this);
}

ustawienia::~ustawienia()
{
    delete ui;
}

void ustawienia::on_grawitacja_valueChanged(double arg1)
{
    emit zmien_graw(arg1);
}

void ustawienia::on_sB_cisnienie_valueChanged(double arg1)
{
    emit zmien_cisnienie(arg1);
}
