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

void familyDialog::on_fviewButton_clicked()
{
    if(ui->cousradio->isChecked()) {
        QPixmap pix(":/family/images/cousins.jpg");
        ui->couslabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->sandicoradio->isChecked()) {
        QPixmap pix(":/family/images/sandicofam.png");
        ui->sandicolabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
}

