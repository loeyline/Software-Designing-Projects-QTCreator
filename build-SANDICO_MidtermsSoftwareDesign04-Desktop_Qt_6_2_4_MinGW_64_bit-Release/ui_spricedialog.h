/********************************************************************************
** Form generated from reading UI file 'spricedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRICEDIALOG_H
#define UI_SPRICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spriceDialog
{
public:
    QLabel *cshoeslabel;
    QPushButton *viewButton;
    QLabel *shoelabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *allstarradio;
    QRadioButton *runstarradio;
    QRadioButton *hipstarradio;
    QRadioButton *cutesystarradio;
    QRadioButton *casualstarradio;
    QPushButton *backButton;

    void setupUi(QDialog *spriceDialog)
    {
        if (spriceDialog->objectName().isEmpty())
            spriceDialog->setObjectName(QString::fromUtf8("spriceDialog"));
        spriceDialog->resize(531, 334);
        spriceDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 202, 165);"));
        cshoeslabel = new QLabel(spriceDialog);
        cshoeslabel->setObjectName(QString::fromUtf8("cshoeslabel"));
        cshoeslabel->setGeometry(QRect(210, 20, 271, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Hey August")});
        font.setPointSize(30);
        cshoeslabel->setFont(font);
        viewButton = new QPushButton(spriceDialog);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(240, 300, 75, 23));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(12);
        font1.setBold(true);
        viewButton->setFont(font1);
        viewButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));
        shoelabel = new QLabel(spriceDialog);
        shoelabel->setObjectName(QString::fromUtf8("shoelabel"));
        shoelabel->setGeometry(QRect(240, 90, 221, 181));
        layoutWidget = new QWidget(spriceDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 100, 141, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        allstarradio = new QRadioButton(layoutWidget);
        allstarradio->setObjectName(QString::fromUtf8("allstarradio"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(true);
        allstarradio->setFont(font2);

        verticalLayout->addWidget(allstarradio);

        runstarradio = new QRadioButton(layoutWidget);
        runstarradio->setObjectName(QString::fromUtf8("runstarradio"));
        runstarradio->setFont(font2);

        verticalLayout->addWidget(runstarradio);

        hipstarradio = new QRadioButton(layoutWidget);
        hipstarradio->setObjectName(QString::fromUtf8("hipstarradio"));
        hipstarradio->setFont(font2);

        verticalLayout->addWidget(hipstarradio);

        cutesystarradio = new QRadioButton(layoutWidget);
        cutesystarradio->setObjectName(QString::fromUtf8("cutesystarradio"));
        cutesystarradio->setFont(font2);

        verticalLayout->addWidget(cutesystarradio);

        casualstarradio = new QRadioButton(layoutWidget);
        casualstarradio->setObjectName(QString::fromUtf8("casualstarradio"));
        casualstarradio->setFont(font2);

        verticalLayout->addWidget(casualstarradio);

        backButton = new QPushButton(spriceDialog);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(370, 300, 75, 23));
        backButton->setFont(font1);
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));
        layoutWidget->raise();
        cshoeslabel->raise();
        viewButton->raise();
        shoelabel->raise();
        backButton->raise();

        retranslateUi(spriceDialog);

        QMetaObject::connectSlotsByName(spriceDialog);
    } // setupUi

    void retranslateUi(QDialog *spriceDialog)
    {
        spriceDialog->setWindowTitle(QCoreApplication::translate("spriceDialog", "Dialog", nullptr));
        cshoeslabel->setText(QCoreApplication::translate("spriceDialog", "Choose your shoes!", nullptr));
        viewButton->setText(QCoreApplication::translate("spriceDialog", "View", nullptr));
        shoelabel->setText(QString());
        allstarradio->setText(QCoreApplication::translate("spriceDialog", "All Star", nullptr));
        runstarradio->setText(QCoreApplication::translate("spriceDialog", "Running Star", nullptr));
        hipstarradio->setText(QCoreApplication::translate("spriceDialog", "Hip Star", nullptr));
        cutesystarradio->setText(QCoreApplication::translate("spriceDialog", "Cutesy Star", nullptr));
        casualstarradio->setText(QCoreApplication::translate("spriceDialog", "Casual Star", nullptr));
        backButton->setText(QCoreApplication::translate("spriceDialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class spriceDialog: public Ui_spriceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRICEDIALOG_H
