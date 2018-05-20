#ifndef SAVEDIALOG_H
#define SAVEDIALOG_H

#include <QDialog>

namespace Ui {
class SaveDialog;
}

class SaveDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SaveDialog(QWidget *parent = 0);
    ~SaveDialog();

    QString nazwa_pliku;

signals:
    void ustaw_tekst(QString);
    
private slots:
    void on_pB_zapisz_clicked();

    void on_lE_nazwa_pliku_textEdited(const QString &arg1);

    void on_pB_anuluj_clicked();





private:
    Ui::SaveDialog *ui;
};

#endif // SAVEDIALOG_H
