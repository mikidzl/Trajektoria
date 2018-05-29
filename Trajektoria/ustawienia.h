#ifndef USTAWIENIA_H
#define USTAWIENIA_H

#include <QDialog>

namespace Ui {
class ustawienia;
}

class ustawienia : public QDialog
{
    Q_OBJECT
    
public:
    explicit ustawienia(QWidget *parent = 0);
    ~ustawienia();
    
signals:
    void zmien_graw(double);
    void zmien_cisnienie(double);

private slots:
    void on_grawitacja_valueChanged(double arg1);

    void on_sB_cisnienie_valueChanged(double arg1);

private:
    Ui::ustawienia *ui;
};

#endif // USTAWIENIA_H
