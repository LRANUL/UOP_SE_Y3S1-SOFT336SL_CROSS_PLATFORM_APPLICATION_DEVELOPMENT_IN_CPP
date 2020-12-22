/*  HOLD DEVELOPMENT DUE TO BUGS IDENTIFIED ON THE CALL BACK FUNCTION
 *  ASSUMING AN ISSUE WITH REFERENCES AND SHOWS FURTHER REQUIREMENT TO THE USE OF EVENT- DRIVEN FRAMEWORK
 *  FURTHER DEVELOPMENT TIME AND TESTING IS REQUIRED.
 * 
 *  WORK HALTED HERE DUE TO PROJECT DELIVERY ON 7TH JANUARY 2021
 *  

#ifndef RICERCACHART_H
#define RICERCACHART_H

#include <QWidget>

#include <mainwindow.h>

namespace Ui
{
    class RicercaChart;
}

class RicercaChart : public QWidget
{
    Q_OBJECT

public:
    explicit RicercaChart(QWidget *parent = nullptr);
    ~RicercaChart();

//    QString newChart();
void newChart();
private slots:
    QString addLineChart();
    void on_addLineChart_clicked();

private:
    Ui::RicercaChart *ui;
};

#endif // RICERCACHART_H



*/
