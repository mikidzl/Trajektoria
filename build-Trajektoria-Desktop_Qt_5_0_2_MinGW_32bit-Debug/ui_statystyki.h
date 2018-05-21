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

QT_BEGIN_NAMESPACE

class Ui_statystyki
{
public:
    QLabel *vMax;
    QLabel *l_vMax;
    QLabel *label;
    QLabel *xKon;

    void setupUi(QDialog *statystyki)
    {
        if (statystyki->objectName().isEmpty())
            statystyki->setObjectName(QStringLiteral("statystyki"));
        statystyki->resize(300, 200);
        statystyki->setMinimumSize(QSize(300, 200));
        statystyki->setMaximumSize(QSize(300, 200));
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
        l_vMax->setGeometry(QRect(80, 50, 101, 16));
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

        retranslateUi(statystyki);

        QMetaObject::connectSlotsByName(statystyki);
    } // setupUi

    void retranslateUi(QDialog *statystyki)
    {
        statystyki->setWindowTitle(QApplication::translate("statystyki", "Dialog", 0));
        vMax->setText(QApplication::translate("statystyki", "0m/s", 0));
        l_vMax->setText(QApplication::translate("statystyki", "Pr\304\231dko\305\233\304\207 max:", 0));
        label->setText(QApplication::translate("statystyki", "Odleg\305\202o\305\233\304\207 od startu:", 0));
        xKon->setText(QApplication::translate("statystyki", "0m", 0));
    } // retranslateUi

};

namespace Ui {
    class statystyki: public Ui_statystyki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATYSTYKI_H
