/********************************************************************************
** Form generated from reading UI file 'instrukcja_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUKCJA_DIALOG_H
#define UI_INSTRUKCJA_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Instrukcja_dialog
{
public:
    QLabel *label_instrukcja;

    void setupUi(QDialog *Instrukcja_dialog)
    {
        if (Instrukcja_dialog->objectName().isEmpty())
            Instrukcja_dialog->setObjectName(QStringLiteral("Instrukcja_dialog"));
        Instrukcja_dialog->resize(650, 900);
        Instrukcja_dialog->setMinimumSize(QSize(650, 900));
        Instrukcja_dialog->setMaximumSize(QSize(650, 900));
        label_instrukcja = new QLabel(Instrukcja_dialog);
        label_instrukcja->setObjectName(QStringLiteral("label_instrukcja"));
        label_instrukcja->setGeometry(QRect(52, 35, 521, 401));

        retranslateUi(Instrukcja_dialog);

        QMetaObject::connectSlotsByName(Instrukcja_dialog);
    } // setupUi

    void retranslateUi(QDialog *Instrukcja_dialog)
    {
        Instrukcja_dialog->setWindowTitle(QApplication::translate("Instrukcja_dialog", "Dialog", 0));
        label_instrukcja->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Instrukcja_dialog: public Ui_Instrukcja_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUKCJA_DIALOG_H
