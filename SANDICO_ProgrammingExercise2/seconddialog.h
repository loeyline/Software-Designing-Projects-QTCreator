#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>

namespace Ui {
class seconddialog;
}

class seconddialog : public QDialog
{
    Q_OBJECT

public:
    explicit seconddialog(QWidget *parent = nullptr);
    ~seconddialog();

private slots:
    void on_ftmConvert_clicked();

private:
    Ui::seconddialog *ui;
};

#endif // SECONDDIALOG_H
