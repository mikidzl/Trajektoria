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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statystyki
{
public:
    QPushButton *pB_wykres;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *l_vMax;
    QLabel *vMax;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *ymax;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *xKon;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *czasLotu;

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
        pB_wykres = new QPushButton(statystyki);
        pB_wykres->setObjectName(QStringLiteral("pB_wykres"));
        pB_wykres->setGeometry(QRect(60, 160, 111, 28));
        widget = new QWidget(statystyki);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 50, 187, 103));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        l_vMax = new QLabel(widget);
        l_vMax->setObjectName(QStringLiteral("l_vMax"));

        horizontalLayout->addWidget(l_vMax);

        vMax = new QLabel(widget);
        vMax->setObjectName(QStringLiteral("vMax"));
        vMax->setMinimumSize(QSize(50, 0));
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

        horizontalLayout->addWidget(vMax);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        ymax = new QLabel(widget);
        ymax->setObjectName(QStringLiteral("ymax"));
        ymax->setMinimumSize(QSize(50, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ymax->setPalette(palette1);
        ymax->setAutoFillBackground(true);
        ymax->setFrameShape(QFrame::Box);
        ymax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(ymax);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        xKon = new QLabel(widget);
        xKon->setObjectName(QStringLiteral("xKon"));
        xKon->setMinimumSize(QSize(60, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        xKon->setPalette(palette2);
        xKon->setAutoFillBackground(true);
        xKon->setFrameShape(QFrame::Box);
        xKon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(xKon);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        czasLotu = new QLabel(widget);
        czasLotu->setObjectName(QStringLiteral("czasLotu"));
        czasLotu->setMinimumSize(QSize(50, 0));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        czasLotu->setPalette(palette3);
        czasLotu->setAutoFillBackground(true);
        czasLotu->setFrameShape(QFrame::Box);
        czasLotu->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(czasLotu);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(statystyki);

        QMetaObject::connectSlotsByName(statystyki);
    } // setupUi

    void retranslateUi(QDialog *statystyki)
    {
        statystyki->setWindowTitle(QApplication::translate("statystyki", "Analiza trajektorii", 0));
        pB_wykres->setText(QApplication::translate("statystyki", "Wykres pr\304\231dko\305\233ci", 0));
        l_vMax->setText(QApplication::translate("statystyki", "Pr\304\231dko\305\233\304\207 max:", 0));
        vMax->setText(QApplication::translate("statystyki", "0m/s", 0));
        label_3->setText(QApplication::translate("statystyki", "Wysoko\305\233\304\207 max:", 0));
        ymax->setText(QApplication::translate("statystyki", "0m", 0));
        label->setText(QApplication::translate("statystyki", "Odleg\305\202o\305\233\304\207 od startu:", 0));
        xKon->setText(QApplication::translate("statystyki", "0m", 0));
        label_2->setText(QApplication::translate("statystyki", "Czas lotu:", 0));
        czasLotu->setText(QApplication::translate("statystyki", "0s", 0));
    } // retranslateUi

};

namespace Ui {
    class statystyki: public Ui_statystyki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATYSTYKI_H
