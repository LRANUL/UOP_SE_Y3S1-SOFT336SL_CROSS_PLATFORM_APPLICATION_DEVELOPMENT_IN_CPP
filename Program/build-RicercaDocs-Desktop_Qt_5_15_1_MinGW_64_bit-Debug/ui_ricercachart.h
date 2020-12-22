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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RicercaChart
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *heading;
    QTabWidget *tabWidget;
    QWidget *lineChart;
    QGridLayout *gridLayout_2;
    QLabel *chartXAxislbl;
    QLabel *lineChartNamelbl;
    QLabel *guide;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *y1;
    QLineEdit *y2;
    QLineEdit *y3;
    QLineEdit *y4;
    QLineEdit *y5;
    QLineEdit *y6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *x1;
    QLineEdit *x2;
    QLineEdit *x3;
    QLineEdit *x4;
    QLineEdit *x5;
    QLineEdit *x6;
    QLineEdit *lineChartTitle;
    QLabel *chartYAxislbl;
    QPushButton *addLineChart;
    QPushButton *previewLineChart;
    QWidget *pieChart;
    QLineEdit *pieChartTitle;
    QLabel *pieChartNamelbl;
    QWidget *dateTimeChart;
    QWidget *polarChart;
    QWidget *barchart;

    void setupUi(QWidget *RicercaChart)
    {
        if (RicercaChart->objectName().isEmpty())
            RicercaChart->setObjectName(QString::fromUtf8("RicercaChart"));
        RicercaChart->resize(832, 601);
        gridLayout = new QGridLayout(RicercaChart);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(RicercaChart);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        heading = new QLabel(frame);
        heading->setObjectName(QString::fromUtf8("heading"));
        heading->setGeometry(QRect(10, 10, 231, 41));
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 50, 791, 521));
        lineChart = new QWidget();
        lineChart->setObjectName(QString::fromUtf8("lineChart"));
        gridLayout_2 = new QGridLayout(lineChart);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        chartXAxislbl = new QLabel(lineChart);
        chartXAxislbl->setObjectName(QString::fromUtf8("chartXAxislbl"));
        QFont font;
        font.setPointSize(10);
        chartXAxislbl->setFont(font);

        gridLayout_2->addWidget(chartXAxislbl, 2, 0, 1, 2);

        lineChartNamelbl = new QLabel(lineChart);
        lineChartNamelbl->setObjectName(QString::fromUtf8("lineChartNamelbl"));

        gridLayout_2->addWidget(lineChartNamelbl, 0, 0, 1, 1);

        guide = new QLabel(lineChart);
        guide->setObjectName(QString::fromUtf8("guide"));

        gridLayout_2->addWidget(guide, 1, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        y1 = new QLineEdit(lineChart);
        y1->setObjectName(QString::fromUtf8("y1"));

        horizontalLayout_2->addWidget(y1);

        y2 = new QLineEdit(lineChart);
        y2->setObjectName(QString::fromUtf8("y2"));

        horizontalLayout_2->addWidget(y2);

        y3 = new QLineEdit(lineChart);
        y3->setObjectName(QString::fromUtf8("y3"));

        horizontalLayout_2->addWidget(y3);

        y4 = new QLineEdit(lineChart);
        y4->setObjectName(QString::fromUtf8("y4"));

        horizontalLayout_2->addWidget(y4);

        y5 = new QLineEdit(lineChart);
        y5->setObjectName(QString::fromUtf8("y5"));

        horizontalLayout_2->addWidget(y5);

        y6 = new QLineEdit(lineChart);
        y6->setObjectName(QString::fromUtf8("y6"));

        horizontalLayout_2->addWidget(y6);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        x1 = new QLineEdit(lineChart);
        x1->setObjectName(QString::fromUtf8("x1"));

        horizontalLayout->addWidget(x1);

        x2 = new QLineEdit(lineChart);
        x2->setObjectName(QString::fromUtf8("x2"));

        horizontalLayout->addWidget(x2);

        x3 = new QLineEdit(lineChart);
        x3->setObjectName(QString::fromUtf8("x3"));

        horizontalLayout->addWidget(x3);

        x4 = new QLineEdit(lineChart);
        x4->setObjectName(QString::fromUtf8("x4"));

        horizontalLayout->addWidget(x4);

        x5 = new QLineEdit(lineChart);
        x5->setObjectName(QString::fromUtf8("x5"));

        horizontalLayout->addWidget(x5);

        x6 = new QLineEdit(lineChart);
        x6->setObjectName(QString::fromUtf8("x6"));

        horizontalLayout->addWidget(x6);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 4);

        lineChartTitle = new QLineEdit(lineChart);
        lineChartTitle->setObjectName(QString::fromUtf8("lineChartTitle"));
        QFont font1;
        font1.setPointSize(12);
        lineChartTitle->setFont(font1);

        gridLayout_2->addWidget(lineChartTitle, 0, 1, 1, 1);

        chartYAxislbl = new QLabel(lineChart);
        chartYAxislbl->setObjectName(QString::fromUtf8("chartYAxislbl"));
        chartYAxislbl->setFont(font);

        gridLayout_2->addWidget(chartYAxislbl, 5, 0, 1, 2);

        addLineChart = new QPushButton(lineChart);
        addLineChart->setObjectName(QString::fromUtf8("addLineChart"));

        gridLayout_2->addWidget(addLineChart, 7, 3, 1, 1);

        previewLineChart = new QPushButton(lineChart);
        previewLineChart->setObjectName(QString::fromUtf8("previewLineChart"));

        gridLayout_2->addWidget(previewLineChart, 7, 2, 1, 1);

        tabWidget->addTab(lineChart, QString());
        pieChart = new QWidget();
        pieChart->setObjectName(QString::fromUtf8("pieChart"));
        pieChartTitle = new QLineEdit(pieChart);
        pieChartTitle->setObjectName(QString::fromUtf8("pieChartTitle"));
        pieChartTitle->setGeometry(QRect(140, 20, 111, 24));
        pieChartNamelbl = new QLabel(pieChart);
        pieChartNamelbl->setObjectName(QString::fromUtf8("pieChartNamelbl"));
        pieChartNamelbl->setGeometry(QRect(10, 20, 121, 24));
        tabWidget->addTab(pieChart, QString());
        dateTimeChart = new QWidget();
        dateTimeChart->setObjectName(QString::fromUtf8("dateTimeChart"));
        tabWidget->addTab(dateTimeChart, QString());
        polarChart = new QWidget();
        polarChart->setObjectName(QString::fromUtf8("polarChart"));
        tabWidget->addTab(polarChart, QString());
        barchart = new QWidget();
        barchart->setObjectName(QString::fromUtf8("barchart"));
        tabWidget->addTab(barchart, QString());

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(RicercaChart);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RicercaChart);
    } // setupUi

    void retranslateUi(QWidget *RicercaChart)
    {
        RicercaChart->setWindowTitle(QCoreApplication::translate("RicercaChart", "Create New Chart", nullptr));
        heading->setText(QCoreApplication::translate("RicercaChart", "<html><head/><body><p><span style=\" font-size:18pt; color:#464646;\">Create a Chart</span></p></body></html>", nullptr));
        chartXAxislbl->setText(QCoreApplication::translate("RicercaChart", "<html><head/><body><p><span style=\" font-size:11pt;\">Enter X-Axis Values</span></p></body></html>", nullptr));
        lineChartNamelbl->setText(QCoreApplication::translate("RicercaChart", "<html><head/><body><p><span style=\" font-size:12pt;\">Chart Name:</span></p></body></html>", nullptr));
        guide->setText(QCoreApplication::translate("RicercaChart", "<html><head/><body><p><span style=\" font-size:9pt;\">Please enter the X and Y values in the below inputs, leave the extra inputs as blank and press Create Chart.</span></p></body></html>", nullptr));
        y1->setInputMask(QString());
        y1->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 1", nullptr));
        y2->setInputMask(QString());
        y2->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 2", nullptr));
        y3->setInputMask(QString());
        y3->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 3", nullptr));
        y4->setInputMask(QString());
        y4->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 4", nullptr));
        y5->setInputMask(QString());
        y5->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 5", nullptr));
        y6->setInputMask(QString());
        y6->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 6", nullptr));
        x1->setInputMask(QString());
        x1->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 1", nullptr));
        x2->setInputMask(QString());
        x2->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 2", nullptr));
        x3->setInputMask(QString());
        x3->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 3", nullptr));
        x4->setInputMask(QString());
        x4->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 4", nullptr));
        x5->setInputMask(QString());
        x5->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 5", nullptr));
        x6->setInputMask(QString());
        x6->setPlaceholderText(QCoreApplication::translate("RicercaChart", "value 6", nullptr));
#if QT_CONFIG(tooltip)
        lineChartTitle->setToolTip(QCoreApplication::translate("RicercaChart", "<html><head/><body><p>Add Title for chart</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineChartTitle->setPlaceholderText(QCoreApplication::translate("RicercaChart", "Chart name", nullptr));
        chartYAxislbl->setText(QCoreApplication::translate("RicercaChart", "<html><head/><body><p><span style=\" font-size:11pt;\">Enter Y-Axis Values</span></p></body></html>", nullptr));
        addLineChart->setText(QCoreApplication::translate("RicercaChart", "Add", nullptr));
        previewLineChart->setText(QCoreApplication::translate("RicercaChart", "Preview", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(lineChart), QCoreApplication::translate("RicercaChart", "Line Chart", nullptr));
#if QT_CONFIG(tooltip)
        pieChartTitle->setToolTip(QCoreApplication::translate("RicercaChart", "<html><head/><body><p>Add Title for chart</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pieChartNamelbl->setText(QCoreApplication::translate("RicercaChart", "<html><head/><body><p><span style=\" font-size:12pt;\">Chart Name:</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pieChart), QCoreApplication::translate("RicercaChart", "Pie Chart", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(dateTimeChart), QCoreApplication::translate("RicercaChart", "Date-Time Chart", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(polarChart), QCoreApplication::translate("RicercaChart", "Polar Char", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(barchart), QCoreApplication::translate("RicercaChart", "Bar Chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RicercaChart: public Ui_RicercaChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RICERCACHART_H
