#include "familydialog.h"
#include "ui_familydialog.h"

familyDialog::familyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::familyDialog)
{
    ui->setupUi(this);
}

familyDialog::~familyDialog()
{
    delete ui;
}

void familyDialog::on_faviewButton_clicked()
{
    if(ui->famfrnsradio->isChecked()) {
        QPixmap pix(":/family/images/famfriends.jpg");
        ui->ffrnslabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->balrelradio->isChecked()) {
        QPixmap pix(":/family/images/balrel.png");
        ui->balrellabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->cousinsradio->isChecked()) {
        QPixmap pix(":/family/images/cousins.jpg");
        ui->couslabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->relsanradio->isChecked()) {
        QPixmap pix(":/family/images/relsan.png");
        ui->relsanlabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->sanradio->isChecked()) {
        QPixmap pix(":/family/images/sandicofam.jpg");
        ui->sanlabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
}

