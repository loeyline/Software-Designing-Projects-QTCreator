#ifndef SANDICO_PROGRAMMINGEXERCISE1_H
#define SANDICO_PROGRAMMINGEXERCISE1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SANDICO_ProgrammingExercise1; }
QT_END_NAMESPACE

class SANDICO_ProgrammingExercise1 : public QMainWindow
{
    Q_OBJECT

public:
    SANDICO_ProgrammingExercise1(QWidget *parent = nullptr);
    ~SANDICO_ProgrammingExercise1();

private slots:
    void on_convert_clicked();

private:
    Ui::SANDICO_ProgrammingExercise1 *ui;
};
#endif // SANDICO_PROGRAMMINGEXERCISE1_H
