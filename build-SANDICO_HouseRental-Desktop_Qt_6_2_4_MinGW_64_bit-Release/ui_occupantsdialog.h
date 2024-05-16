/********************************************************************************
** Form generated from reading UI file 'occupantsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCCUPANTSDIALOG_H
#define UI_OCCUPANTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_occupantsDialog
{
public:
    QLabel *apolabel;
    QLabel *showocclabel;
    QPushButton *abackButton;
    QPushButton *viewoccButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *occ1radio;
    QRadioButton *occ2radio;
    QRadioButton *occ3radio;
    QRadioButton *occ4radio;
    QRadioButton *occ5radio;

    void setupUi(QDialog *occupantsDialog)
    {
        if (occupantsDialog->objectName().isEmpty())
            occupantsDialog->setObjectName(QString::fromUtf8("occupantsDialog"));
        occupantsDialog->resize(710, 464);
        occupantsDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 167, 153);"));
        apolabel = new QLabel(occupantsDialog);
        apolabel->setObjectName(QString::fromUtf8("apolabel"));
        apolabel->setGeometry(QRect(170, 30, 361, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(25);
        font.setBold(true);
        apolabel->setFont(font);
        showocclabel = new QLabel(occupantsDialog);
        showocclabel->setObjectName(QString::fromUtf8("showocclabel"));
        showocclabel->setGeometry(QRect(310, 110, 311, 281));
        abackButton = new QPushButton(occupantsDialog);
        abackButton->setObjectName(QString::fromUtf8("abackButton"));
        abackButton->setGeometry(QRect(90, 410, 75, 23));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(11);
        font1.setBold(true);
        abackButton->setFont(font1);
        abackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 221, 193);"));
        viewoccButton = new QPushButton(occupantsDialog);
        viewoccButton->setObjectName(QString::fromUtf8("viewoccButton"));
        viewoccButton->setGeometry(QRect(430, 420, 75, 23));
        viewoccButton->setFont(font1);
        viewoccButton->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 221, 193);"));
        widget = new QWidget(occupantsDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 150, 186, 221));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        occ1radio = new QRadioButton(widget);
        occ1radio->setObjectName(QString::fromUtf8("occ1radio"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(10);
        occ1radio->setFont(font2);

        verticalLayout->addWidget(occ1radio);

        occ2radio = new QRadioButton(widget);
        occ2radio->setObjectName(QString::fromUtf8("occ2radio"));
        occ2radio->setFont(font2);

        verticalLayout->addWidget(occ2radio);

        occ3radio = new QRadioButton(widget);
        occ3radio->setObjectName(QString::fromUtf8("occ3radio"));
        occ3radio->setFont(font2);

        verticalLayout->addWidget(occ3radio);

        occ4radio = new QRadioButton(widget);
        occ4radio->setObjectName(QString::fromUtf8("occ4radio"));
        occ4radio->setFont(font2);

        verticalLayout->addWidget(occ4radio);

        occ5radio = new QRadioButton(widget);
        occ5radio->setObjectName(QString::fromUtf8("occ5radio"));
        occ5radio->setFont(font2);

        verticalLayout->addWidget(occ5radio);


        retranslateUi(occupantsDialog);

        QMetaObject::connectSlotsByName(occupantsDialog);
    } // setupUi

    void retranslateUi(QDialog *occupantsDialog)
    {
        occupantsDialog->setWindowTitle(QCoreApplication::translate("occupantsDialog", "Dialog", nullptr));
        apolabel->setText(QCoreApplication::translate("occupantsDialog", "Apartment Occupants", nullptr));
        showocclabel->setText(QString());
        abackButton->setText(QCoreApplication::translate("occupantsDialog", "BACK", nullptr));
        viewoccButton->setText(QCoreApplication::translate("occupantsDialog", "VIEW", nullptr));
        occ1radio->setText(QCoreApplication::translate("occupantsDialog", "North Sebastian Claveria", nullptr));
        occ2radio->setText(QCoreApplication::translate("occupantsDialog", "Brielle Chantal Padua", nullptr));
        occ3radio->setText(QCoreApplication::translate("occupantsDialog", "Austin Kent Alcantara", nullptr));
        occ4radio->setText(QCoreApplication::translate("occupantsDialog", "Jamila Fay Nustra", nullptr));
        occ5radio->setText(QCoreApplication::translate("occupantsDialog", "Antoinette Ramirez", nullptr));
    } // retranslateUi

};

namespace Ui {
    class occupantsDialog: public Ui_occupantsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCCUPANTSDIALOG_H
