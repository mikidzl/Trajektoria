#include "savedialog.h"
#include "ui_savedialog.h"

SaveDialog::SaveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveDialog)
{
    ui->setupUi(this);    
}

SaveDialog::~SaveDialog()
{
    delete ui;
}

void SaveDialog::on_pB_zapisz_clicked()
{
    emit ustaw_tekst(ui->lE_nazwa_pliku->text());
    close();
}


void SaveDialog::on_pB_anuluj_clicked()
{
    close();
}
