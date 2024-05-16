#include "thirddialog.h"
#include "ui_thirddialog.h"

thirddialog::thirddialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirddialog)
{
    ui->setupUi(this);
}

thirddialog::~thirddialog()
{
    delete ui;
}

void thirddialog::on_mtokmConvert_clicked()
{
    double input = ui->meterTextEdit->toPlainText().toDouble();

    double output = input / 1000;
    ui -> kilometerAnswer ->setText("Converted value: " + QString::number(output) + " kilometers");
}

