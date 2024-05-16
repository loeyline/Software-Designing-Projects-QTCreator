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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *logolabel;
    QPushButton *exitButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *titlelabel;
    QPushButton *occupantButton;
    QPushButton *adesignsButton;
    QPushButton *apaymentButton;
    QPushButton *msummaryButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(714, 455);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 167, 153);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logolabel = new QLabel(centralwidget);
        logolabel->setObjectName(QString::fromUtf8("logolabel"));
        logolabel->setGeometry(QRect(230, 20, 311, 161));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(320, 390, 75, 23));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(10);
        font.setBold(true);
        exitButton->setFont(font);
        exitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 221, 193);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 180, 501, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titlelabel = new QLabel(widget);
        titlelabel->setObjectName(QString::fromUtf8("titlelabel"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Billion Dreams")});
        font1.setPointSize(30);
        titlelabel->setFont(font1);

        verticalLayout->addWidget(titlelabel);

        occupantButton = new QPushButton(widget);
        occupantButton->setObjectName(QString::fromUtf8("occupantButton"));
        occupantButton->setFont(font);
        occupantButton->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 221, 193);"));

        verticalLayout->addWidget(occupantButton);

        adesignsButton = new QPushButton(widget);
        adesignsButton->setObjectName(QString::fromUtf8("adesignsButton"));
        adesignsButton->setFont(font);
        adesignsButton->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 221, 193);"));

        verticalLayout->addWidget(adesignsButton);

        apaymentButton = new QPushButton(widget);
        apaymentButton->setObjectName(QString::fromUtf8("apaymentButton"));
        apaymentButton->setFont(font);
        apaymentButton->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 221, 193);"));

        verticalLayout->addWidget(apaymentButton);

        msummaryButton = new QPushButton(widget);
        msummaryButton->setObjectName(QString::fromUtf8("msummaryButton"));
        msummaryButton->setFont(font);
        msummaryButton->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 221, 193);"));

        verticalLayout->addWidget(msummaryButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 714, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Luxice's House Rentals", nullptr));
        logolabel->setText(QString());
        exitButton->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        titlelabel->setText(QCoreApplication::translate("MainWindow", " Welcome to Luxice's House Rentals!", nullptr));
        occupantButton->setText(QCoreApplication::translate("MainWindow", "Apartment Occupants", nullptr));
        adesignsButton->setText(QCoreApplication::translate("MainWindow", "Apartment Designs", nullptr));
        apaymentButton->setText(QCoreApplication::translate("MainWindow", "Apartment Payments", nullptr));
        msummaryButton->setText(QCoreApplication::translate("MainWindow", "Monthly Summary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
