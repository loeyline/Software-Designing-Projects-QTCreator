#include "friendsdialog.h"
#include "ui_friendsdialog.h"
#include <QPixmap>

friendsDialog::friendsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::friendsDialog)
{
    ui->setupUi(this);
}

friendsDialog::~friendsDialog()
{
    delete ui;
}

void friendsDialog::on_frviewButton_clicked()
{
    if(ui->childhoodradio->isChecked()) {
        QPixmap pix(":/friends/images/childhood.png");
        ui->childlabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->elemradio->isChecked()) {
        QPixmap pix(":/friends/images/elemfriends.jpg");
        ui->elemlabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->jhsradio->isChecked()) {
        QPixmap pix(":/friends/images/jhsfriends.jpg");
        ui->jhslabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->shsradio->isChecked()) {
        QPixmap pix(":/friends/images/shsfriends.jpeg");
        ui->shslabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->mainfriendsradio->isChecked()) {
        QPixmap pix(":/friends/images/mainfriends.jpg");
        ui->mainlabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
}

