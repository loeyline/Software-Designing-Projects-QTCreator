/********************************************************************************
** Form generated from reading UI file 'opaydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPAYDIALOG_H
#define UI_OPAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opayDialog
{
public:
    QLabel *orderpaylabel;
    QTextEdit *pEdit;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *submitButton;
    QPushButton *baButton;
    QLabel *label_2;
    QLabel *totallabel;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *namelabel;
    QLabel *plabel;

    void setupUi(QDialog *opayDialog)
    {
        if (opayDialog->objectName().isEmpty())
            opayDialog->setObjectName(QString::fromUtf8("opayDialog"));
        opayDialog->resize(541, 337);
        opayDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 202, 165);"));
        orderpaylabel = new QLabel(opayDialog);
        orderpaylabel->setObjectName(QString::fromUtf8("orderpaylabel"));
        orderpaylabel->setGeometry(QRect(130, 20, 291, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Hey August")});
        font.setPointSize(30);
        font.setBold(false);
        orderpaylabel->setFont(font);
        pEdit = new QTextEdit(opayDialog);
        pEdit->setObjectName(QString::fromUtf8("pEdit"));
        pEdit->setGeometry(QRect(290, 190, 161, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(11);
        font1.setItalic(true);
        pEdit->setFont(font1);
        pEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));
        label = new QLabel(opayDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 250, 47, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(11);
        font2.setBold(true);
        label->setFont(font2);
        layoutWidget = new QWidget(opayDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 300, 158, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        submitButton = new QPushButton(layoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Century Gothic")});
        font3.setPointSize(12);
        font3.setBold(true);
        submitButton->setFont(font3);
        submitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));

        horizontalLayout->addWidget(submitButton);

        baButton = new QPushButton(layoutWidget);
        baButton->setObjectName(QString::fromUtf8("baButton"));
        baButton->setFont(font3);
        baButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));

        horizontalLayout->addWidget(baButton);

        label_2 = new QLabel(opayDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 280, 321, 16));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Century Gothic")});
        font4.setBold(true);
        font4.setItalic(true);
        label_2->setFont(font4);
        totallabel = new QLabel(opayDialog);
        totallabel->setObjectName(QString::fromUtf8("totallabel"));
        totallabel->setGeometry(QRect(226, 250, 221, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Century Gothic")});
        font5.setPointSize(12);
        font5.setItalic(true);
        totallabel->setFont(font5);
        comboBox = new QComboBox(opayDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(290, 130, 161, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Century Gothic")});
        comboBox->setFont(font6);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));
        layoutWidget1 = new QWidget(opayDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 120, 188, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        namelabel = new QLabel(layoutWidget1);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setFont(font2);

        verticalLayout_2->addWidget(namelabel);

        plabel = new QLabel(layoutWidget1);
        plabel->setObjectName(QString::fromUtf8("plabel"));
        plabel->setFont(font2);

        verticalLayout_2->addWidget(plabel);


        retranslateUi(opayDialog);

        QMetaObject::connectSlotsByName(opayDialog);
    } // setupUi

    void retranslateUi(QDialog *opayDialog)
    {
        opayDialog->setWindowTitle(QCoreApplication::translate("opayDialog", "Dialog", nullptr));
        orderpaylabel->setText(QCoreApplication::translate("opayDialog", "Order and Pay Here!", nullptr));
        label->setText(QCoreApplication::translate("opayDialog", "TOTAL:", nullptr));
        submitButton->setText(QCoreApplication::translate("opayDialog", "Submit", nullptr));
        baButton->setText(QCoreApplication::translate("opayDialog", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("opayDialog", "One shoe per customer only to accomodate all customers!", nullptr));
        totallabel->setText(QString());
        namelabel->setText(QCoreApplication::translate("opayDialog", " Name of Shoe and Price:", nullptr));
        plabel->setText(QCoreApplication::translate("opayDialog", "     Enter Amount Paid:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opayDialog: public Ui_opayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPAYDIALOG_H
