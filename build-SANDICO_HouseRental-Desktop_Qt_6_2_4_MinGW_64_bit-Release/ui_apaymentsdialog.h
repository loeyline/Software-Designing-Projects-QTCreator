/********************************************************************************
** Form generated from reading UI file 'apaymentsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APAYMENTSDIALOG_H
#define UI_APAYMENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_apaymentsDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *apaymentsDialog)
    {
        if (apaymentsDialog->objectName().isEmpty())
            apaymentsDialog->setObjectName(QString::fromUtf8("apaymentsDialog"));
        apaymentsDialog->resize(737, 486);
        apaymentsDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 167, 153);"));
        label = new QLabel(apaymentsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 30, 351, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(apaymentsDialog);

        QMetaObject::connectSlotsByName(apaymentsDialog);
    } // setupUi

    void retranslateUi(QDialog *apaymentsDialog)
    {
        apaymentsDialog->setWindowTitle(QCoreApplication::translate("apaymentsDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("apaymentsDialog", "Apartment Payments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class apaymentsDialog: public Ui_apaymentsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APAYMENTSDIALOG_H
