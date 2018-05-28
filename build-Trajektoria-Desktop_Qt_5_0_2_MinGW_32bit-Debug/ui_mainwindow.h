/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInstrukcja;
    QAction *actionO_programie;
    QAction *actionAutor;
    QAction *actionCos;
    QAction *actionTam;
    QWidget *centralWidget;
    QComboBox *cB_obiekt;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QSlider *hS_predkosc;
    QSpinBox *sB_predkosc;
    QHBoxLayout *horizontalLayout_kat;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QSlider *hS_kat;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *sB_kat;
    QHBoxLayout *horizontalLayout_Wysokosc;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QSlider *hS_wysokosc;
    QSpinBox *sB_wysokosc;
    QHBoxLayout *horizontalLayout_wiatr;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QSlider *hS_wiatr;
    QSpinBox *sB_wiatr;
    QCheckBox *cB_atmosfera;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pB_statystyki;
    QPushButton *pB_zapisz;
    QPushButton *pb_pokaz;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuPomoc;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(570, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(570, 400));
        MainWindow->setMaximumSize(QSize(570, 400));
        MainWindow->setFocusPolicy(Qt::WheelFocus);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral("ikona.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        MainWindow->setIconSize(QSize(60, 60));
        actionInstrukcja = new QAction(MainWindow);
        actionInstrukcja->setObjectName(QStringLiteral("actionInstrukcja"));
        actionO_programie = new QAction(MainWindow);
        actionO_programie->setObjectName(QStringLiteral("actionO_programie"));
        actionAutor = new QAction(MainWindow);
        actionAutor->setObjectName(QStringLiteral("actionAutor"));
        actionCos = new QAction(MainWindow);
        actionCos->setObjectName(QStringLiteral("actionCos"));
        actionTam = new QAction(MainWindow);
        actionTam->setObjectName(QStringLiteral("actionTam"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        cB_obiekt = new QComboBox(centralWidget);
        cB_obiekt->setObjectName(QStringLiteral("cB_obiekt"));
        cB_obiekt->setGeometry(QRect(40, 50, 140, 22));
        cB_obiekt->setMinimumSize(QSize(140, 0));
        cB_obiekt->setModelColumn(0);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 88, 451, 154));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        hS_predkosc = new QSlider(layoutWidget);
        hS_predkosc->setObjectName(QStringLiteral("hS_predkosc"));
        hS_predkosc->setMinimumSize(QSize(250, 0));
        hS_predkosc->setMaximumSize(QSize(250, 16777215));
        hS_predkosc->setCursor(QCursor(Qt::ArrowCursor));
        hS_predkosc->setMaximum(100);
        hS_predkosc->setPageStep(5);
        hS_predkosc->setValue(10);
        hS_predkosc->setSliderPosition(10);
        hS_predkosc->setOrientation(Qt::Horizontal);
        hS_predkosc->setTickPosition(QSlider::TicksAbove);
        hS_predkosc->setTickInterval(10);

        horizontalLayout->addWidget(hS_predkosc);

        sB_predkosc = new QSpinBox(layoutWidget);
        sB_predkosc->setObjectName(QStringLiteral("sB_predkosc"));
        sB_predkosc->setMinimumSize(QSize(80, 0));
        sB_predkosc->setWrapping(false);
        sB_predkosc->setFrame(true);
        sB_predkosc->setReadOnly(false);
        sB_predkosc->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        sB_predkosc->setMaximum(100);
        sB_predkosc->setSingleStep(1);
        sB_predkosc->setValue(10);

        horizontalLayout->addWidget(sB_predkosc);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_kat = new QHBoxLayout();
        horizontalLayout_kat->setSpacing(6);
        horizontalLayout_kat->setObjectName(QStringLiteral("horizontalLayout_kat"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_kat->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_kat->addItem(horizontalSpacer);

        hS_kat = new QSlider(layoutWidget);
        hS_kat->setObjectName(QStringLiteral("hS_kat"));
        hS_kat->setMinimumSize(QSize(250, 0));
        hS_kat->setMaximumSize(QSize(250, 16777215));
        hS_kat->setMaximum(180);
        hS_kat->setValue(45);
        hS_kat->setOrientation(Qt::Horizontal);
        hS_kat->setTickPosition(QSlider::TicksAbove);
        hS_kat->setTickInterval(18);

        horizontalLayout_kat->addWidget(hS_kat);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_kat->addItem(horizontalSpacer_5);

        sB_kat = new QSpinBox(layoutWidget);
        sB_kat->setObjectName(QStringLiteral("sB_kat"));
        sB_kat->setMaximum(180);
        sB_kat->setValue(45);

        horizontalLayout_kat->addWidget(sB_kat);


        verticalLayout->addLayout(horizontalLayout_kat);

        horizontalLayout_Wysokosc = new QHBoxLayout();
        horizontalLayout_Wysokosc->setSpacing(6);
        horizontalLayout_Wysokosc->setObjectName(QStringLiteral("horizontalLayout_Wysokosc"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_Wysokosc->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Wysokosc->addItem(horizontalSpacer_2);

        hS_wysokosc = new QSlider(layoutWidget);
        hS_wysokosc->setObjectName(QStringLiteral("hS_wysokosc"));
        hS_wysokosc->setMinimumSize(QSize(250, 0));
        hS_wysokosc->setMaximumSize(QSize(250, 16777215));
        hS_wysokosc->setMaximum(1500);
        hS_wysokosc->setSingleStep(10);
        hS_wysokosc->setPageStep(50);
        hS_wysokosc->setSliderPosition(0);
        hS_wysokosc->setOrientation(Qt::Horizontal);
        hS_wysokosc->setTickPosition(QSlider::TicksAbove);
        hS_wysokosc->setTickInterval(150);

        horizontalLayout_Wysokosc->addWidget(hS_wysokosc);

        sB_wysokosc = new QSpinBox(layoutWidget);
        sB_wysokosc->setObjectName(QStringLiteral("sB_wysokosc"));
        sB_wysokosc->setMinimumSize(QSize(80, 0));
        sB_wysokosc->setMaximum(9000);

        horizontalLayout_Wysokosc->addWidget(sB_wysokosc);


        verticalLayout->addLayout(horizontalLayout_Wysokosc);

        horizontalLayout_wiatr = new QHBoxLayout();
        horizontalLayout_wiatr->setSpacing(6);
        horizontalLayout_wiatr->setObjectName(QStringLiteral("horizontalLayout_wiatr"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_wiatr->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_wiatr->addItem(horizontalSpacer_3);

        hS_wiatr = new QSlider(layoutWidget);
        hS_wiatr->setObjectName(QStringLiteral("hS_wiatr"));
        hS_wiatr->setMinimumSize(QSize(250, 0));
        hS_wiatr->setMaximumSize(QSize(250, 16777215));
        hS_wiatr->setMinimum(-60);
        hS_wiatr->setMaximum(60);
        hS_wiatr->setOrientation(Qt::Horizontal);
        hS_wiatr->setTickPosition(QSlider::TicksAbove);
        hS_wiatr->setTickInterval(12);

        horizontalLayout_wiatr->addWidget(hS_wiatr);

        sB_wiatr = new QSpinBox(layoutWidget);
        sB_wiatr->setObjectName(QStringLiteral("sB_wiatr"));
        sB_wiatr->setMinimumSize(QSize(80, 0));
        sB_wiatr->setMinimum(-60);
        sB_wiatr->setMaximum(60);

        horizontalLayout_wiatr->addWidget(sB_wiatr);


        verticalLayout->addLayout(horizontalLayout_wiatr);

        cB_atmosfera = new QCheckBox(centralWidget);
        cB_atmosfera->setObjectName(QStringLiteral("cB_atmosfera"));
        cB_atmosfera->setGeometry(QRect(40, 250, 191, 23));
        cB_atmosfera->setChecked(true);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(200, 250, 295, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pB_statystyki = new QPushButton(layoutWidget1);
        pB_statystyki->setObjectName(QStringLiteral("pB_statystyki"));

        horizontalLayout_2->addWidget(pB_statystyki);

        pB_zapisz = new QPushButton(layoutWidget1);
        pB_zapisz->setObjectName(QStringLiteral("pB_zapisz"));

        horizontalLayout_2->addWidget(pB_zapisz);

        pb_pokaz = new QPushButton(layoutWidget1);
        pb_pokaz->setObjectName(QStringLiteral("pb_pokaz"));

        horizontalLayout_2->addWidget(pb_pokaz);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 570, 26));
        menuBar->setAutoFillBackground(false);
        menuBar->setStyleSheet(QStringLiteral(""));
        menuBar->setDefaultUp(false);
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuMenu->setAutoFillBackground(false);
        menuMenu->setStyleSheet(QStringLiteral(""));
        menuMenu->setTearOffEnabled(false);
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QStringLiteral("menuPomoc"));
        menuPomoc->setAutoFillBackground(false);
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        statusBar->setContextMenuPolicy(Qt::PreventContextMenu);
        statusBar->setLayoutDirection(Qt::LeftToRight);
        statusBar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuPomoc->menuAction());
        menuMenu->addAction(actionCos);
        menuMenu->addAction(actionTam);
        menuPomoc->addAction(actionInstrukcja);
        menuPomoc->addAction(actionO_programie);
        menuPomoc->addAction(actionAutor);

        retranslateUi(MainWindow);
        QObject::connect(hS_predkosc, SIGNAL(valueChanged(int)), sB_predkosc, SLOT(setValue(int)));
        QObject::connect(sB_predkosc, SIGNAL(valueChanged(int)), hS_predkosc, SLOT(setValue(int)));
        QObject::connect(sB_kat, SIGNAL(valueChanged(int)), hS_kat, SLOT(setValue(int)));
        QObject::connect(hS_kat, SIGNAL(valueChanged(int)), sB_kat, SLOT(setValue(int)));
        QObject::connect(sB_wysokosc, SIGNAL(valueChanged(int)), hS_wysokosc, SLOT(setValue(int)));
        QObject::connect(hS_wysokosc, SIGNAL(valueChanged(int)), sB_wysokosc, SLOT(setValue(int)));
        QObject::connect(sB_wiatr, SIGNAL(valueChanged(int)), hS_wiatr, SLOT(setValue(int)));
        QObject::connect(hS_wiatr, SIGNAL(valueChanged(int)), sB_wiatr, SLOT(setValue(int)));

        cB_obiekt->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Trajektoria balistyczna", 0));
        actionInstrukcja->setText(QApplication::translate("MainWindow", "Instrukcja", 0));
        actionO_programie->setText(QApplication::translate("MainWindow", "O programie", 0));
        actionAutor->setText(QApplication::translate("MainWindow", "O autorze", 0));
        actionCos->setText(QApplication::translate("MainWindow", "cos", 0));
        actionTam->setText(QApplication::translate("MainWindow", "tam", 0));
        cB_obiekt->clear();
        cB_obiekt->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pocisk 9mm", 0)
         << QApplication::translate("MainWindow", "Pi\305\202ka golfowa", 0)
         << QApplication::translate("MainWindow", "Pi\305\202ka koszykowa", 0)
         << QApplication::translate("MainWindow", "Pi\305\202ka pla\305\274owa", 0)
         << QApplication::translate("MainWindow", "Ping-pongowa", 0)
        );
        label_2->setText(QApplication::translate("MainWindow", "Pr\304\231dko\305\233\304\207:", 0));
        sB_predkosc->setSpecialValueText(QString());
        sB_predkosc->setSuffix(QApplication::translate("MainWindow", "m/s", 0));
        label_3->setText(QApplication::translate("MainWindow", "K\304\205t:", 0));
        sB_kat->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        label_5->setText(QApplication::translate("MainWindow", "Wysoko\305\233\304\207: ", 0));
        sB_wysokosc->setSpecialValueText(QString());
        sB_wysokosc->setSuffix(QApplication::translate("MainWindow", "m", 0));
        label_7->setText(QApplication::translate("MainWindow", "Pr\304\231dko\305\233\304\207 wiatru:", 0));
        sB_wiatr->setSpecialValueText(QString());
        sB_wiatr->setSuffix(QApplication::translate("MainWindow", "m/s", 0));
        cB_atmosfera->setText(QApplication::translate("MainWindow", "Uwzgl\304\231dnij atmosfer\304\231", 0));
        pB_statystyki->setText(QApplication::translate("MainWindow", "Analiza", 0));
        pB_zapisz->setText(QApplication::translate("MainWindow", "Zapisz", 0));
        pb_pokaz->setText(QApplication::translate("MainWindow", "Rysuj", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0));
        menuPomoc->setTitle(QApplication::translate("MainWindow", "Pomoc", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
