/********************************************************************************
** Form generated from reading UI file 'asummarydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASUMMARYDIALOG_H
#define UI_ASUMMARYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_asummaryDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *asummaryDialog)
    {
        if (asummaryDialog->objectName().isEmpty())
            asummaryDialog->setObjectName(QString::fromUtf8("asummaryDialog"));
        asummaryDialog->resize(738, 483);
        asummaryDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 167, 153);"));
        label = new QLabel(asummaryDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 20, 301, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(asummaryDialog);

        QMetaObject::connectSlotsByName(asummaryDialog);
    } // setupUi

    void retranslateUi(QDialog *asummaryDialog)
    {
        asummaryDialog->setWindowTitle(QCoreApplication::translate("asummaryDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("asummaryDialog", "Monthly Summary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class asummaryDialog: public Ui_asummaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASUMMARYDIALOG_H
