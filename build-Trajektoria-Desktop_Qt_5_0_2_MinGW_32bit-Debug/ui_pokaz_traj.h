/********************************************************************************
** Form generated from reading UI file 'pokaz_traj.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POKAZ_TRAJ_H
#define UI_POKAZ_TRAJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pokaz_traj
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *pokaz_traj)
    {
        if (pokaz_traj->objectName().isEmpty())
            pokaz_traj->setObjectName(QStringLiteral("pokaz_traj"));
        pokaz_traj->resize(700, 510);
        pokaz_traj->setMinimumSize(QSize(680, 510));
        pokaz_traj->setMaximumSize(QSize(700, 510));
        QIcon icon;
        icon.addFile(QStringLiteral("ikona2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pokaz_traj->setWindowIcon(icon);
        layoutWidget = new QWidget(pokaz_traj);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 701, 491));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(640, 480));
        label->setMaximumSize(QSize(640, 480));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(pokaz_traj);

        QMetaObject::connectSlotsByName(pokaz_traj);
    } // setupUi

    void retranslateUi(QDialog *pokaz_traj)
    {
        pokaz_traj->setWindowTitle(QApplication::translate("pokaz_traj", "Dialog", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pokaz_traj: public Ui_pokaz_traj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POKAZ_TRAJ_H
