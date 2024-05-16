#ifndef FAMILYDIALOG_H
#define FAMILYDIALOG_H

#include <QDialog>

namespace Ui {
class familyDialog;
}

class familyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit familyDialog(QWidget *parent = nullptr);
    ~familyDialog();

private slots:
    void on_faviewButton_clicked();

private:
    Ui::familyDialog *ui;
};

#endif // FAMILYDIALOG_H
