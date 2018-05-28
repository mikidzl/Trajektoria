#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    g=0;

    G=9.8;                          //Stałe
    Ro=1.2255;
    Skok=.01;


    S[0]=G;                         //Wpisanie stałych do tablicy
    S[1]=Ro;
    S[2]=Skok;

    if((ladowanie_bazy(Ob)))
    {
        ui->statusBar->showMessage("Baza obiektów pomyślnie załadowana",2000);
    }
    else
    {
        ui->statusBar->showMessage("Błąd: Nie znaleziono pliku \"Baza_obiektow.txt\" ");
    }

    indx=0;

    Cd=Ob[indx][0];
    Masa=Ob[indx][1];
    A=Ob[indx][2];

    O[0]=Cd;
    O[1]=Masa;
    O[2]=A;

    W[0]=10;
    W[1]=M_PI_4;
    W[2]=0;
    W[3]=0;

    nazwa_pliku = "nazwa_pliku";
    atmosfera = true;

    traj_obraz = new pokazTraj(this);
    staty = new statystyki(this);
}

MainWindow::~MainWindow()
{
    usun(g);
    delete g;
    delete ui;
}


void MainWindow::zapiszPlik(QString nazwa)
{
    if(nazwa == "Baza_obiektow")
       {
            ui->statusBar->showMessage("ERROR: Nie można nazwać pliku \"Baza_obiektow.txt\" ",2000);
            return;
       }

    if(g==0)
    {
        Trajektoria(W,S,O,atmosfera,g);
    }

    nazwa_pliku = nazwa.toUtf8().constData();

    if(zapisz(nazwa_pliku + ".txt",g))
        ui->statusBar->showMessage("Plik zapisany",2000);
    else
        ui->statusBar->showMessage("Nie udało się zapisać pliku",2000);
}


void MainWindow::on_pB_zapisz_clicked()
{
    save_dialog = new SaveDialog(this);

    connect(save_dialog,SIGNAL(ustaw_tekst(QString)),this,SLOT(zapiszPlik(QString)));

    save_dialog->show();
}

void MainWindow::on_hS_predkosc_valueChanged(int value)
{
    W[0]=double(value);
    aktualizuj_traj();
}

void MainWindow::on_hS_kat_valueChanged(int value)
{
    W[1]=double(value)*M_PI/180;
    aktualizuj_traj();
}

void MainWindow::on_hS_wysokosc_valueChanged(int value)
{
    W[2]=double(value);
    aktualizuj_traj();
}

void MainWindow::on_hS_wiatr_valueChanged(int value)
{
    W[3]=double(value);
    aktualizuj_traj();
}

void MainWindow::on_cB_obiekt_currentIndexChanged(int index)
{
    O[0]=Ob[index][0];
    O[1]=Ob[index][1];
    O[2]=Ob[index][2];
    aktualizuj_traj();
}

void MainWindow::on_cB_atmosfera_clicked(bool checked)
{
    atmosfera=checked;
    aktualizuj_traj();
}

void MainWindow::on_actionAutor_triggered()
{
    autor_dialog = new autor(this);

    autor_dialog->show();

}

void MainWindow::on_pb_pokaz_clicked()
{

    Trajektoria(W,S,O,atmosfera,g);

    emit(przeslij_liste(g));

    if(traj_obraz->isVisible())
        traj_obraz->close();

//    const QPoint pozycja = this->mapToGlobal(rect().center());

//    traj_obraz->move(pozycja.x() - 400, pozycja.y()/2);

    traj_obraz->move(900,250);

    this->move(300,300);

    traj_obraz->show();

}

void MainWindow::on_actionInstrukcja_triggered()
{
    QLabel *imageLabel = new QLabel;
    QImage image("Instrukcja_beta.png");
    imageLabel->setPixmap(QPixmap::fromImage(image));

    instrukcja = new QScrollArea;
    instrukcja->setBackgroundRole(QPalette::Dark);
    instrukcja->setWidget(imageLabel);
    instrukcja->setAlignment(Qt::AlignHCenter);
    instrukcja->resize(923,900);
    instrukcja->setMinimumSize(923,600);
    instrukcja->setWindowTitle("Instrukcja");
    instrukcja->setWindowIcon(QIcon("ikona.png"));
    instrukcja->show();
}

void MainWindow::aktualizuj_traj()
{
    if(traj_obraz->isVisible() || staty->isVisible())
    {
        Trajektoria(W,S,O,atmosfera,g);
        emit(przeslij_liste(g));
    }
}

void MainWindow::strzalki()
{
    if(Qt::LeftArrow)
        W[1]=W[1]+1;
    aktualizuj_traj();
}



void MainWindow::on_pB_statystyki_clicked()
{
    Trajektoria(W,S,O,atmosfera,g);
    emit(przeslij_liste(g));
    staty->show();
}
