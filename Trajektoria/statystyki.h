#ifndef STATYSTYKI_H
#define STATYSTYKI_H

#include <QDialog>
#include <QPainter>
#include <cmath>

#include "analiza.h"
#include "punkt.h"

namespace Ui {
class statystyki;
}

class statystyki : public QDialog
{
    Q_OBJECT
    
public:
    explicit statystyki(QWidget *parent = 0);
    ~statystyki();

public slots:
     void przyjmij_liste(Punkt *p);
    
private slots:
    void on_pB_wykres_clicked();
    QPixmap rysuj_wykres(Punkt *p, int size_x, int size_y);
    void aktualizuj_staty(Punkt *p);
    void pokaz_wykres(Punkt *p);

private:
    Ui::statystyki *ui;
    Punkt *p;
    double t;
};

#endif // STATYSTYKI_H
