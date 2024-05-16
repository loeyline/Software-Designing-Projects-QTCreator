#ifndef FOURTHDIALOG_H
#define FOURTHDIALOG_H

#include <QDialog>

namespace Ui {
class fourthdialog;
}

class fourthdialog : public QDialog
{
    Q_OBJECT

public:
    explicit fourthdialog(QWidget *parent = nullptr);
    ~fourthdialog();

private slots:
    void on_ydtoftConvert_clicked();

private:
    Ui::fourthdialog *ui;
};

#endif // FOURTHDIALOG_H
