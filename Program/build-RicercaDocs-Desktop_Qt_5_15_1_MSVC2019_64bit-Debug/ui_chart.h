/********************************************************************************
** Form generated from reading UI file 'chart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHART_H
#define UI_CHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Chart
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *chartType;

    void setupUi(QDialog *Chart)
    {
        if (Chart->objectName().isEmpty())
            Chart->setObjectName(QString::fromUtf8("Chart"));
        Chart->resize(400, 300);
        buttonBox = new QDialogButtonBox(Chart);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        chartType = new QComboBox(Chart);
        chartType->addItem(QString());
        chartType->addItem(QString());
        chartType->addItem(QString());
        chartType->setObjectName(QString::fromUtf8("chartType"));
        chartType->setGeometry(QRect(240, 40, 75, 24));

        retranslateUi(Chart);
        QObject::connect(buttonBox, SIGNAL(accepted()), Chart, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Chart, SLOT(reject()));

        QMetaObject::connectSlotsByName(Chart);
    } // setupUi

    void retranslateUi(QDialog *Chart)
    {
        Chart->setWindowTitle(QCoreApplication::translate("Chart", "Dialog", nullptr));
        chartType->setItemText(0, QCoreApplication::translate("Chart", "Line", nullptr));
        chartType->setItemText(1, QCoreApplication::translate("Chart", "Bar", nullptr));
        chartType->setItemText(2, QCoreApplication::translate("Chart", "Pie", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Chart: public Ui_Chart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHART_H
