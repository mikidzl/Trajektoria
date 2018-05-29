/********************************************************************************
** Form generated from reading UI file 'ustawienia.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USTAWIENIA_H
#define UI_USTAWIENIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ustawienia
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *grawitacja;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *sB_cisnienie;

    void setupUi(QDialog *ustawienia)
    {
        if (ustawienia->objectName().isEmpty())
            ustawienia->setObjectName(QStringLiteral("ustawienia"));
        ustawienia->resize(300, 200);
        ustawienia->setMinimumSize(QSize(300, 200));
        ustawienia->setMaximumSize(QSize(300, 200));
        QIcon icon;
        icon.addFile(QStringLiteral("ikona.png"), QSize(), QIcon::Normal, QIcon::Off);
        ustawienia->setWindowIcon(icon);
        widget = new QWidget(ustawienia);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 60, 159, 61));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        grawitacja = new QDoubleSpinBox(widget);
        grawitacja->setObjectName(QStringLiteral("grawitacja"));
        grawitacja->setMinimumSize(QSize(82, 0));
        grawitacja->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        grawitacja->setDecimals(1);
        grawitacja->setMinimum(0.5);
        grawitacja->setSingleStep(0.1);
        grawitacja->setValue(9.8);

        horizontalLayout->addWidget(grawitacja);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        sB_cisnienie = new QDoubleSpinBox(widget);
        sB_cisnienie->setObjectName(QStringLiteral("sB_cisnienie"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sB_cisnienie->sizePolicy().hasHeightForWidth());
        sB_cisnienie->setSizePolicy(sizePolicy);
        sB_cisnienie->setMinimumSize(QSize(70, 0));
        sB_cisnienie->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sB_cisnienie->setDecimals(1);
        sB_cisnienie->setMinimum(0.1);
        sB_cisnienie->setMaximum(5);
        sB_cisnienie->setSingleStep(0.1);
        sB_cisnienie->setValue(1);

        horizontalLayout_2->addWidget(sB_cisnienie);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ustawienia);

        QMetaObject::connectSlotsByName(ustawienia);
    } // setupUi

    void retranslateUi(QDialog *ustawienia)
    {
        ustawienia->setWindowTitle(QApplication::translate("ustawienia", "Ustawienia", 0));
        label->setText(QApplication::translate("ustawienia", "Grawitacja:", 0));
        grawitacja->setPrefix(QString());
        grawitacja->setSuffix(QApplication::translate("ustawienia", "m/s\302\262", 0));
        label_2->setText(QApplication::translate("ustawienia", "Ci\305\233nienie:", 0));
        sB_cisnienie->setSuffix(QApplication::translate("ustawienia", "atm", 0));
    } // retranslateUi

};

namespace Ui {
    class ustawienia: public Ui_ustawienia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USTAWIENIA_H
