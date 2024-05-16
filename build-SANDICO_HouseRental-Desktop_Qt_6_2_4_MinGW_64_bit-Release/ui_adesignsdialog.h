/********************************************************************************
** Form generated from reading UI file 'adesignsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADESIGNSDIALOG_H
#define UI_ADESIGNSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adesignsDialog
{
public:
    QLabel *adesignlabel;
    QPushButton *backdesignsButton;
    QPushButton *vdesignsButton;
    QLabel *vdesignslabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *design1radio;
    QRadioButton *design2radio;
    QRadioButton *design3radio;
    QRadioButton *design4radio;
    QRadioButton *design5radio;
    QRadioButton *design6radio;

    void setupUi(QDialog *adesignsDialog)
    {
        if (adesignsDialog->objectName().isEmpty())
            adesignsDialog->setObjectName(QString::fromUtf8("adesignsDialog"));
        adesignsDialog->resize(754, 464);
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(10);
        font.setBold(true);
        adesignsDialog->setFont(font);
        adesignsDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 167, 153);"));
        adesignlabel = new QLabel(adesignsDialog);
        adesignlabel->setObjectName(QString::fromUtf8("adesignlabel"));
        adesignlabel->setGeometry(QRect(220, 20, 311, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(25);
        font1.setBold(true);
        adesignlabel->setFont(font1);
        backdesignsButton = new QPushButton(adesignsDialog);
        backdesignsButton->setObjectName(QString::fromUtf8("backdesignsButton"));
        backdesignsButton->setGeometry(QRect(70, 410, 75, 23));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(11);
        font2.setBold(true);
        backdesignsButton->setFont(font2);
        backdesignsButton->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 221, 193);"));
        vdesignsButton = new QPushButton(adesignsDialog);
        vdesignsButton->setObjectName(QString::fromUtf8("vdesignsButton"));
        vdesignsButton->setGeometry(QRect(440, 420, 75, 23));
        vdesignsButton->setFont(font2);
        vdesignsButton->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 221, 193);"));
        vdesignslabel = new QLabel(adesignsDialog);
        vdesignslabel->setObjectName(QString::fromUtf8("vdesignslabel"));
        vdesignslabel->setGeometry(QRect(280, 130, 411, 251));
        widget = new QWidget(adesignsDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 140, 141, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        design1radio = new QRadioButton(widget);
        design1radio->setObjectName(QString::fromUtf8("design1radio"));
        design1radio->setFont(font);

        verticalLayout->addWidget(design1radio);

        design2radio = new QRadioButton(widget);
        design2radio->setObjectName(QString::fromUtf8("design2radio"));
        design2radio->setFont(font);

        verticalLayout->addWidget(design2radio);

        design3radio = new QRadioButton(widget);
        design3radio->setObjectName(QString::fromUtf8("design3radio"));
        design3radio->setFont(font);

        verticalLayout->addWidget(design3radio);

        design4radio = new QRadioButton(widget);
        design4radio->setObjectName(QString::fromUtf8("design4radio"));
        design4radio->setFont(font);

        verticalLayout->addWidget(design4radio);

        design5radio = new QRadioButton(widget);
        design5radio->setObjectName(QString::fromUtf8("design5radio"));
        design5radio->setFont(font);

        verticalLayout->addWidget(design5radio);

        design6radio = new QRadioButton(widget);
        design6radio->setObjectName(QString::fromUtf8("design6radio"));
        design6radio->setFont(font);

        verticalLayout->addWidget(design6radio);


        retranslateUi(adesignsDialog);

        QMetaObject::connectSlotsByName(adesignsDialog);
    } // setupUi

    void retranslateUi(QDialog *adesignsDialog)
    {
        adesignsDialog->setWindowTitle(QCoreApplication::translate("adesignsDialog", "Dialog", nullptr));
        adesignlabel->setText(QCoreApplication::translate("adesignsDialog", "Apartment Designs", nullptr));
        backdesignsButton->setText(QCoreApplication::translate("adesignsDialog", "BACK", nullptr));
        vdesignsButton->setText(QCoreApplication::translate("adesignsDialog", "VIEW", nullptr));
        vdesignslabel->setText(QString());
        design1radio->setText(QCoreApplication::translate("adesignsDialog", "Apartment 1", nullptr));
        design2radio->setText(QCoreApplication::translate("adesignsDialog", "Apartment 2", nullptr));
        design3radio->setText(QCoreApplication::translate("adesignsDialog", "Apartment 3", nullptr));
        design4radio->setText(QCoreApplication::translate("adesignsDialog", "Apartment 4", nullptr));
        design5radio->setText(QCoreApplication::translate("adesignsDialog", "Apartment 5", nullptr));
        design6radio->setText(QCoreApplication::translate("adesignsDialog", "Apartment 6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adesignsDialog: public Ui_adesignsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADESIGNSDIALOG_H
