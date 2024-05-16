#include "sandico_programmingexercise1.h"
#include "ui_sandico_programmingexercise1.h"

SANDICO_ProgrammingExercise1::SANDICO_ProgrammingExercise1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SANDICO_ProgrammingExercise1)
{
    ui->setupUi(this);
}

SANDICO_ProgrammingExercise1::~SANDICO_ProgrammingExercise1()
{
    delete ui;
}


void SANDICO_ProgrammingExercise1::on_convert_clicked()
{
    QString input = ui -> feet -> toPlainText();
    double feet = input.toInt();
    double meters = feet / 3.2808;

    ui -> meters -> setText(QString::number(meters));

}

