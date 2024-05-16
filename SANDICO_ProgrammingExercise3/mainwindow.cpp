#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myselfdialog.h"
#include "friendsdialog.h"
#include "familydialog.h"

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


void MainWindow::on_myselfButton_clicked()
{
    myselfDialog myselfDialog;

    myselfDialog.setModal(true);
    myselfDialog.exec();
}


void MainWindow::on_friendsButton_clicked()
{
    friendsDialog friendsDialog;

    friendsDialog.setModal(true);
    friendsDialog.exec();
}


void MainWindow::on_familyButton_clicked()
{
    familyDialog familyDialog;

    familyDialog.setModal(true);
    familyDialog.exec();
}

