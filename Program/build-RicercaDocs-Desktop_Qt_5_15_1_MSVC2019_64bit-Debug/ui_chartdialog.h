/********************************************************************************
** Form generated from reading UI file 'chartdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTDIALOG_H
#define UI_CHARTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_chartDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *chartDialog)
    {
        if (chartDialog->objectName().isEmpty())
            chartDialog->setObjectName(QString::fromUtf8("chartDialog"));
        chartDialog->resize(584, 448);
        buttonBox = new QDialogButtonBox(chartDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(210, 390, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(chartDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), chartDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), chartDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(chartDialog);
    } // setupUi

    void retranslateUi(QDialog *chartDialog)
    {
        chartDialog->setWindowTitle(QCoreApplication::translate("chartDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chartDialog: public Ui_chartDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTDIALOG_H
