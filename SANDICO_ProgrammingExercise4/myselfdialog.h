#ifndef MYSELFDIALOG_H
#define MYSELFDIALOG_H

#include <QDialog>

namespace Ui {
class myselfDialog;
}

class myselfDialog : public QDialog
{
    Q_OBJECT

public:
    explicit myselfDialog(QWidget *parent = nullptr);
    ~myselfDialog();

private slots:
    void on_mviewButton_clicked();

private:
    Ui::myselfDialog *ui;
};

#endif // MYSELFDIALOG_H
