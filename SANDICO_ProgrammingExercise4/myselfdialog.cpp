#include "myselfdialog.h"
#include "ui_myselfdialog.h"

myselfDialog::myselfDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myselfDialog)
{
    ui->setupUi(this);
}

myselfDialog::~myselfDialog()
{
    delete ui;
}

void myselfDialog::on_mviewButton_clicked()
{
    if(ui->babyradio->isChecked()) {
        QPixmap pix(":/myself/images/baby.png");
        ui->babylabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->fyoradio->isChecked()) {
        QPixmap pix(":/myself/images/fiveyearsold.png");
        ui->fyolabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->tyoradio->isChecked()) {
        QPixmap pix(":/myself/images/tenyearsold.png");
        ui->tyolabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->fiyoradio->isChecked()) {
        QPixmap pix(":/myself/images/fifteenyo.jpg");
        ui->fiyolabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
    if(ui->nyoradio->isChecked()) {
        QPixmap pix(":/myself/images/nineteenyo.png");
        ui->nyolabel->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    }
}

