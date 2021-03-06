#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScrollArea>
#include <cmath>

#include "savedialog.h"
#include "autor.h"
#include "pokaz_traj.h"
#include "statystyki.h"

#include "punkt.h"
#include "trajektoria.h"
#include "pliki.h"
#include "listy.h"
#include "baza_obiektow.h"
#include "analiza.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    obiekt *Ob;

public slots:
    void zapiszPlik(QString nazwa);


signals:
    void przeslij_liste(Punkt *g);


    
private slots:
    void on_pB_start_clicked();

    void on_hS_predkosc_valueChanged(int value);

    void on_hS_kat_valueChanged(int value);

    void on_hS_wysokosc_valueChanged(int value);

    void on_hS_wiatr_valueChanged(int value);

    void on_pB_zapisz_clicked();

    void on_cB_obiekt_currentIndexChanged(int index);

    void on_cB_atmosfera_clicked(bool checked);

    void on_actionAutor_triggered();

    void on_pb_pokaz_clicked();

    void on_actionInstrukcja_triggered();

    void aktualizuj_traj();

    void on_pB_statystyki_clicked();

private:
    Ui::MainWindow *ui;
    Punkt *g;
    SaveDialog *save_dialog;
    autor *autor_dialog;
    pokazTraj *traj_obraz;
    QScrollArea *instrukcja;
    statystyki *staty;
    double G,Ro,Skok;
    double S[6],W[4],O[3];
    string nazwa_pliku;
    bool atmosfera;
    int indx;


};

#endif // MAINWINDOW_H
