#ifndef FRIENDSDIALOG_H
#define FRIENDSDIALOG_H

#include <QDialog>

namespace Ui {
class friendsDialog;
}

class friendsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit friendsDialog(QWidget *parent = nullptr);
    ~friendsDialog();

private slots:
    void on_frviewButton_clicked();

private:
    Ui::friendsDialog *ui;
};

#endif // FRIENDSDIALOG_H
