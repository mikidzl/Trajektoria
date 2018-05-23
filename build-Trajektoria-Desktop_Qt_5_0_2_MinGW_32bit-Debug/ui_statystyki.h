/********************************************************************************
** Form generated from reading UI file 'statystyki.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATYSTYKI_H
#define UI_STATYSTYKI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_statystyki
{
public:
    QLabel *vMax;
    QLabel *l_vMax;
    QLabel *label;
    QLabel *xKon;
    QPushButton *pB_wykres;
    QLabel *czasLotu;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *ymax;

    void setupUi(QDialog *statystyki)
    {
        if (statystyki->objectName().isEmpty())
            statystyki->setObjectName(QStringLiteral("statystyki"));
        statystyki->resize(300, 200);
        statystyki->setMinimumSize(QSize(300, 200));
        statystyki->setMaximumSize(QSize(300, 200));
        QIcon icon;
        icon.addFile(QStringLiteral("ikona.png"), QSize(), QIcon::Normal, QIcon::Off);
        statystyki->setWindowIcon(icon);
        vMax = new QLabel(statystyki);
        vMax->setObjectName(QStringLiteral("vMax"));
        vMax->setGeometry(QRect(170, 50, 61, 16));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        vMax->setPalette(palette);
        vMax->setAutoFillBackground(true);
        vMax->setFrameShape(QFrame::Box);
        vMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        l_vMax = new QLabel(statystyki);
        l_vMax->setObjectName(QStringLiteral("l_vMax"));
        l_vMax->setGeometry(QRect(60, 50, 91, 16));
        label = new QLabel(statystyki);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 100, 121, 16));
        xKon = new QLabel(statystyki);
        xKon->setObjectName(QStringLiteral("xKon"));
        xKon->setGeometry(QRect(180, 100, 61, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        xKon->setPalette(palette1);
        xKon->setAutoFillBackground(true);
        xKon->setFrameShape(QFrame::Box);
        xKon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pB_wykres = new QPushButton(statystyki);
        pB_wykres->setObjectName(QStringLiteral("pB_wykres"));
        pB_wykres->setGeometry(QRect(50, 150, 111, 28));
        czasLotu = new QLabel(statystyki);
        czasLotu->setObjectName(QStringLiteral("czasLotu"));
        czasLotu->setGeometry(QRect(180, 130, 61, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        czasLotu->setPalette(palette2);
        czasLotu->setAutoFillBackground(true);
        czasLotu->setFrameShape(QFrame::Box);
        czasLotu->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(statystyki);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 130, 31, 16));
        label_3 = new QLabel(statystyki);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 141, 16));
        ymax = new QLabel(statystyki);
        ymax->setObjectName(QStringLiteral("ymax"));
        ymax->setGeometry(QRect(170, 80, 61, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ymax->setPalette(palette3);
        ymax->setAutoFillBackground(true);
        ymax->setFrameShape(QFrame::Box);
        ymax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(statystyki);

        QMetaObject::connectSlotsByName(statystyki);
    } // setupUi

    void retranslateUi(QDialog *statystyki)
    {
        statystyki->setWindowTitle(QApplication::translate("statystyki", "Analiza trajektorii", 0));
        vMax->setText(QApplication::translate("statystyki", "0m/s", 0));
        l_vMax->setText(QApplication::translate("statystyki", "Pr\304\231dko\305\233\304\207 max:", 0));
        label->setText(QApplication::translate("statystyki", "Odleg\305\202o\305\233\304\207 od startu:", 0));
        xKon->setText(QApplication::translate("statystyki", "0m", 0));
        pB_wykres->setText(QApplication::translate("statystyki", "Wykres pr\304\231dko\305\233ci", 0));
        czasLotu->setText(QApplication::translate("statystyki", "0s", 0));
        label_2->setText(QApplication::translate("statystyki", "Czas:", 0));
        label_3->setText(QApplication::translate("statystyki", "Wysoko\305\233\304\207 maksymalna:", 0));
        ymax->setText(QApplication::translate("statystyki", "0m", 0));
    } // retranslateUi

};

namespace Ui {
    class statystyki: public Ui_statystyki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATYSTYKI_H
