#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "seconddialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ftomButton_clicked();

    void on_mtokmButton_clicked();

    void on_ydtoftButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
