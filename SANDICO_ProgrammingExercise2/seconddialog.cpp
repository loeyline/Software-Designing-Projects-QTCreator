#include "seconddialog.h"
#include "ui_seconddialog.h"

seconddialog::seconddialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seconddialog)
{
    ui->setupUi(this);
}

seconddialog::~seconddialog()
{
    delete ui;
}

void seconddialog::on_ftmConvert_clicked()
{
    double input = ui ->feetTextEdit->toPlainText().toDouble();

    double output = input / 3.2808;
    ui->meterAnswer->setText("Converted value: " + QString::number(output) + " meters");
}

