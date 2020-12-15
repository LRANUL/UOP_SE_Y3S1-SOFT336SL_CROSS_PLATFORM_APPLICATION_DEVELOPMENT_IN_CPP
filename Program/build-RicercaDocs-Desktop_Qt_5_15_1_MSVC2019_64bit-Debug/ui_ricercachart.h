/********************************************************************************
** Form generated from reading UI file 'ricercachart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RICERCACHART_H
#define UI_RICERCACHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RicercaChart
{
public:

    void setupUi(QWidget *RicercaChart)
    {
        if (RicercaChart->objectName().isEmpty())
            RicercaChart->setObjectName(QString::fromUtf8("RicercaChart"));
        RicercaChart->resize(832, 601);

        retranslateUi(RicercaChart);

        QMetaObject::connectSlotsByName(RicercaChart);
    } // setupUi

    void retranslateUi(QWidget *RicercaChart)
    {
        RicercaChart->setWindowTitle(QCoreApplication::translate("RicercaChart", "Create New Chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RicercaChart: public Ui_RicercaChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RICERCACHART_H
