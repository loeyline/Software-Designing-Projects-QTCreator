#include "fourthdialog.h"
#include "ui_fourthdialog.h"

fourthdialog::fourthdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fourthdialog)
{
    ui->setupUi(this);
}

fourthdialog::~fourthdialog()
{
    delete ui;
}

void fourthdialog::on_ydtoftConvert_clicked()
{
    double input = ui ->ydTextEdit->toPlainText().toDouble();

    double output = input * 3;
    ui->feetAnswer->setText("Converted value: " + QString::number(output) + " feet");
}

