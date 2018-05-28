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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pokaz_traj
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_trajektoria;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pB_zapisz;
    QLineEdit *line_nazwa;
    QLabel *label;

    void setupUi(QDialog *pokaz_traj)
    {
        if (pokaz_traj->objectName().isEmpty())
            pokaz_traj->setObjectName(QStringLiteral("pokaz_traj"));
        pokaz_traj->resize(700, 550);
        pokaz_traj->setMinimumSize(QSize(680, 550));
        pokaz_traj->setMaximumSize(QSize(700, 550));
        pokaz_traj->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral("ikona.png"), QSize(), QIcon::Normal, QIcon::Off);
        pokaz_traj->setWindowIcon(icon);
        layoutWidget = new QWidget(pokaz_traj);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 701, 491));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_trajektoria = new QLabel(layoutWidget);
        label_trajektoria->setObjectName(QStringLiteral("label_trajektoria"));
        label_trajektoria->setMinimumSize(QSize(640, 480));
        label_trajektoria->setMaximumSize(QSize(640, 480));
        label_trajektoria->setFrameShape(QFrame::Box);
        label_trajektoria->setFrameShadow(QFrame::Plain);

        horizontalLayout->addWidget(label_trajektoria);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget = new QWidget(pokaz_traj);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(390, 510, 275, 30));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pB_zapisz = new QPushButton(widget);
        pB_zapisz->setObjectName(QStringLiteral("pB_zapisz"));

        horizontalLayout_2->addWidget(pB_zapisz);

        line_nazwa = new QLineEdit(widget);
        line_nazwa->setObjectName(QStringLiteral("line_nazwa"));
        line_nazwa->setMaxLength(100);
        line_nazwa->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(line_nazwa);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);


        retranslateUi(pokaz_traj);

        QMetaObject::connectSlotsByName(pokaz_traj);
    } // setupUi

    void retranslateUi(QDialog *pokaz_traj)
    {
        pokaz_traj->setWindowTitle(QApplication::translate("pokaz_traj", "Wykres trajektorii", 0));
        label_trajektoria->setText(QString());
        pB_zapisz->setText(QApplication::translate("pokaz_traj", "Zapisz jako...", 0));
        line_nazwa->setText(QApplication::translate("pokaz_traj", "trajektoria", 0));
        label->setText(QApplication::translate("pokaz_traj", ".bmp", 0));
    } // retranslateUi

};

namespace Ui {
    class pokaz_traj: public Ui_pokaz_traj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POKAZ_TRAJ_H
