#ifndef STATYSTYKI_H
#define STATYSTYKI_H

#include <QDialog>
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
    void aktualizuj_staty(Punkt *p);
    
private:
    Ui::statystyki *ui;
};

#endif // STATYSTYKI_H
