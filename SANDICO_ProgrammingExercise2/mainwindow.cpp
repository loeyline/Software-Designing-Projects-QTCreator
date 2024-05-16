#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "thirddialog.h"
#include "fourthdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ftomButton_clicked()
{
    seconddialog seconddialog;

    seconddialog.setModal(true);
    seconddialog.exec();
}


void MainWindow::on_mtokmButton_clicked()
{
   thirddialog thirddialog;

   thirddialog.setModal(true);
   thirddialog.exec();
}


void MainWindow::on_ydtoftButton_clicked()
{
    fourthdialog fourthdialog;

    fourthdialog.setModal(true);
    fourthdialog.exec();
}

