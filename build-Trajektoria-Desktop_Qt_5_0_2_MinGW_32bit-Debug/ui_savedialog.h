/********************************************************************************
** Form generated from reading UI file 'savedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDIALOG_H
#define UI_SAVEDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pB_zapisz;
    QPushButton *pB_anuluj;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lE_nazwa_pliku;
    QLabel *label_2;

    void setupUi(QDialog *SaveDialog)
    {
        if (SaveDialog->objectName().isEmpty())
            SaveDialog->setObjectName(QStringLiteral("SaveDialog"));
        SaveDialog->setWindowModality(Qt::WindowModal);
        SaveDialog->resize(320, 240);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SaveDialog->sizePolicy().hasHeightForWidth());
        SaveDialog->setSizePolicy(sizePolicy);
        SaveDialog->setMinimumSize(QSize(320, 240));
        SaveDialog->setMaximumSize(QSize(320, 240));
        QIcon icon;
        icon.addFile(QStringLiteral("ikona2.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveDialog->setWindowIcon(icon);
        layoutWidget = new QWidget(SaveDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 170, 195, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pB_zapisz = new QPushButton(layoutWidget);
        pB_zapisz->setObjectName(QStringLiteral("pB_zapisz"));

        horizontalLayout->addWidget(pB_zapisz);

        pB_anuluj = new QPushButton(layoutWidget);
        pB_anuluj->setObjectName(QStringLiteral("pB_anuluj"));

        horizontalLayout->addWidget(pB_anuluj);

        layoutWidget1 = new QWidget(SaveDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 80, 166, 49));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lE_nazwa_pliku = new QLineEdit(layoutWidget1);
        lE_nazwa_pliku->setObjectName(QStringLiteral("lE_nazwa_pliku"));
        lE_nazwa_pliku->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lE_nazwa_pliku);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SaveDialog);

        QMetaObject::connectSlotsByName(SaveDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveDialog)
    {
        SaveDialog->setWindowTitle(QApplication::translate("SaveDialog", "Zapisz trajektorie", 0));
#ifndef QT_NO_STATUSTIP
        SaveDialog->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        SaveDialog->setWhatsThis(QApplication::translate("SaveDialog", "<html><head/><body><p>Okno zapisu aplikacji <span style=\" font-style:italic;\">Trajektoria balistyczna.</span></p><p>W polu tekstowym nale\305\274y wpisa\304\207 po\305\274\304\205dan\304\205 przez</p><p>u\305\274ytkownika nazw\304\231. Do nazwy automatycznie zostanie</p><p>dodane rozszerzenie pliku.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pB_zapisz->setText(QApplication::translate("SaveDialog", "Zapisz", 0));
        pB_anuluj->setText(QApplication::translate("SaveDialog", "Anuluj", 0));
        label->setText(QApplication::translate("SaveDialog", "Nazwa pliku:", 0));
        lE_nazwa_pliku->setText(QApplication::translate("SaveDialog", "nazwa_pliku", 0));
        label_2->setText(QApplication::translate("SaveDialog", ".txt", 0));
    } // retranslateUi

};

namespace Ui {
    class SaveDialog: public Ui_SaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDIALOG_H
