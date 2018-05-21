#ifndef POKAZ_TRAJ_H
#define POKAZ_TRAJ_H

#include <QDialog>

#include "obraz.h"
#include "punkt.h"

namespace Ui {
class pokaz_traj;
}

class pokazTraj : public QDialog
{
    Q_OBJECT
    
public:
    explicit pokazTraj(QWidget *parent = 0);
    ~pokazTraj();

public slots:
    void zrob_trajektorie(Punkt *p);

    
private:
    Ui::pokaz_traj *ui;
    QPixmap obraz;
};




#endif // POKAZ_TRAJ_H
