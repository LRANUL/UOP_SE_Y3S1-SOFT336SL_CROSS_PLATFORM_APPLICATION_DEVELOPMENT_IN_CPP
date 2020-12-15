/********************************************************************************
** Form generated from reading UI file 'charttool.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTTOOL_H
#define UI_CHARTTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChartTool
{
public:

    void setupUi(QWidget *ChartTool)
    {
        if (ChartTool->objectName().isEmpty())
            ChartTool->setObjectName(QString::fromUtf8("ChartTool"));
        ChartTool->resize(400, 300);

        retranslateUi(ChartTool);

        QMetaObject::connectSlotsByName(ChartTool);
    } // setupUi

    void retranslateUi(QWidget *ChartTool)
    {
        ChartTool->setWindowTitle(QCoreApplication::translate("ChartTool", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChartTool: public Ui_ChartTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTTOOL_H
