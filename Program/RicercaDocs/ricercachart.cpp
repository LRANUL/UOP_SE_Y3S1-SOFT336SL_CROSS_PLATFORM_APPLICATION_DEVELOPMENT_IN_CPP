/*  HOLD DEVELOPMENT DUE TO BUGS IDENTIFIED ON THE CALL BACK FUNCTION
 *  ASSUMING AN ISSUE WITH REFERENCES AND SHOWS FURTHER REQUIREMENT TO THE USE OF EVENT- DRIVEN FRAMEWORK
 *  FURTHER DEVELOPMENT TIME AND TESTING IS REQUIRED.
 *
 *  WORK HALTED HERE DUE TO PROJECT DELIVERY ON 7TH JANUARY 2021
 *

#include "ricercachart.h"
#include "ui_ricercachart.h"

#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>
//#include <QEventLoop>
#include <QLineEdit>

QEventLoop Addloop;
RicercaChart::RicercaChart(QWidget *parent) : QWidget(parent),
                                              ui(new Ui::RicercaChart)
{
    ui->setupUi(this);
//    connect(ui->addLineChart, SIGNAL(clicked()), &Addloop, SLOT(quit()));
    connect(ui->lineChartTitle, SIGNAL(textChanged()),this, SLOT(ui->lineChartTitle->text()));
}

RicercaChart::~RicercaChart()
{
    delete ui;
}
//QString RicercaChart::newChart()
void RicercaChart::newChart()
{

    RicercaChart *newChart = new RicercaChart();
    newChart->show();
//    Addloop.exec();

//    QString LineChart = addLineChart();
//    qWarning() << LineChart;
//    return LineChart;
//              QBarSet *set0 = new QBarSet("TEST");
//                 QBarSet *set1 = new QBarSet("TEST");
//                 QBarSet *set2 = new QBarSet("TEST");
//                 QBarSet *set3 = new QBarSet("TEST");

//                 *set0 << 1 << 2 << 3 << 4 << 5 << 6;
//                 *set1 << 5 << 4 << 9 << 4 << 3 << 7;
//                 *set2 << 2 << 8 << 8 << 10 << 8 << 0;
//                 *set3 << 8 << 6 << 7 << 3 << 4 << 5;
//                 QBarSeries *series = new QBarSeries();
//                 series->append(set0);
//                 series->append(set1);
//                 series->append(set2);
//                 series->append(set3);
//                 QChart *chart = new QChart();
//                    chart->addSeries(series);
//                    chart->setTitle("TEST");
//                    QStringList categories;
//                       categories << "A" << "B" << "C" << "D" << "E" ;
//                       QBarCategoryAxis *axisX = new QBarCategoryAxis();
//                       axisX->append(categories);
//                       chart->addAxis(axisX, Qt::AlignBottom);
//                       series->attachAxis(axisX);

//                       QValueAxis *axisY = new QValueAxis();
//                       axisY->setRange(0,12);
//                       chart->addAxis(axisY, Qt::AlignLeft);
//                       series->attachAxis(axisY);
//                       chart->legend()->setVisible(true);
//                           chart->legend()->setAlignment(Qt::AlignBottom);

//                       QChartView *chartView = new QChartView(chart);
//                          chartView->setRenderHint(QPainter::Antialiasing);
//                          QPixmap image = chartView->grab();
//                          image.save("a.png", "PNG");
//                          QByteArray byteArray;
//                          QBuffer buffer(&byteArray);
//                          image.save(&buffer, "PNG");
//                          QString imageBase64 = QString::fromLatin1(byteArray.toBase64().data());
//              return imageBase64;
}
QString RicercaChart ::addLineChart()
{
    QString chartName = ui->lineChartTitle->text();
    QLineSeries *series = new QLineSeries();
    int x1 = ui->x1->text().toFloat();
    int x2 = ui->x2->text().toFloat();
    int x3 = ui->x3->text().toFloat();
    int x4 = ui->x4->text().toFloat();
    int x5 = ui->x5->text().toFloat();
    int x6 = ui->x6->text().toFloat();
    int y1 = ui->y1->text().toFloat();
    int y2 = ui->y2->text().toFloat();
    int y3 = ui->y3->text().toFloat();
    int y4 = ui->y4->text().toFloat();
    int y5 = ui->y5->text().toFloat();
    int y6 = ui->y6->text().toFloat();

    series->append(x1, y1);
    series->append(x2, y2);
    series->append(x3, y3);
    series->append(x4, y4);
    series->append(x5, y5);
    series->append(x6, y6);
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle(chartName);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    QPixmap image = chartView->grab();
    image.save("a.png", "PNG");
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    image.save(&buffer, "PNG");
    QString imageBase64 = QString::fromLatin1(byteArray.toBase64().data());

    qWarning() <<  "LINEFUNC" + imageBase64;

    return imageBase64;

}




void RicercaChart::on_addLineChart_clicked()
{
    QString chartName = ui->lineChartTitle->text();
    QLineSeries *series = new QLineSeries();
    int x1 = ui->x1->text().toFloat();
    int x2 = ui->x2->text().toFloat();
    int x3 = ui->x3->text().toFloat();
    int x4 = ui->x4->text().toFloat();
    int x5 = ui->x5->text().toFloat();
    int x6 = ui->x6->text().toFloat();
    int y1 = ui->y1->text().toFloat();
    int y2 = ui->y2->text().toFloat();
    int y3 = ui->y3->text().toFloat();
    int y4 = ui->y4->text().toFloat();
    int y5 = ui->y5->text().toFloat();
    int y6 = ui->y6->text().toFloat();

    series->append(x1, y1);
    series->append(x2, y2);
    series->append(x3, y3);
    series->append(x4, y4);
    series->append(x5, y5);
    series->append(x6, y6);
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle(chartName);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    QPixmap image = chartView->grab();
    image.save("a.png", "PNG");
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    image.save(&buffer, "PNG");
    QString imageBase64 = QString::fromLatin1(byteArray.toBase64().data());
    MainWindow addChart;

    qWarning() <<  "LINEFUNC";
    addChart.addChart_clicked(imageBase64);
}

*/
