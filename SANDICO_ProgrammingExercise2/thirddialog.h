#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H

#include <QDialog>

namespace Ui {
class thirddialog;
}

class thirddialog : public QDialog
{
    Q_OBJECT

public:
    explicit thirddialog(QWidget *parent = nullptr);
    ~thirddialog();

private slots:
    void on_mtokmConvert_clicked();

private:
    Ui::thirddialog *ui;
};

#endif // THIRDDIALOG_H
