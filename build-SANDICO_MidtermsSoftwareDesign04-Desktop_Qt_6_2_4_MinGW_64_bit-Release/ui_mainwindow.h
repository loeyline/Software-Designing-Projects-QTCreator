/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *logolabel;
    QSplitter *splitter;
    QLabel *label;
    QPushButton *shoepriceButton;
    QPushButton *orderpayButton;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(551, 340);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 202, 165);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logolabel = new QLabel(centralwidget);
        logolabel->setObjectName(QString::fromUtf8("logolabel"));
        logolabel->setGeometry(QRect(180, 10, 201, 131));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(150, 170, 262, 128));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Hey August")});
        font.setPointSize(30);
        label->setFont(font);
        splitter->addWidget(label);
        shoepriceButton = new QPushButton(splitter);
        shoepriceButton->setObjectName(QString::fromUtf8("shoepriceButton"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(12);
        font1.setBold(true);
        shoepriceButton->setFont(font1);
        shoepriceButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));
        splitter->addWidget(shoepriceButton);
        orderpayButton = new QPushButton(splitter);
        orderpayButton->setObjectName(QString::fromUtf8("orderpayButton"));
        orderpayButton->setFont(font1);
        orderpayButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));
        splitter->addWidget(orderpayButton);
        exitButton = new QPushButton(splitter);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setFont(font1);
        exitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));
        splitter->addWidget(exitButton);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 551, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logolabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Sneakers Unlimited", nullptr));
        shoepriceButton->setText(QCoreApplication::translate("MainWindow", "List of Shoes and Prices", nullptr));
        orderpayButton->setText(QCoreApplication::translate("MainWindow", "Order and Payments", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
