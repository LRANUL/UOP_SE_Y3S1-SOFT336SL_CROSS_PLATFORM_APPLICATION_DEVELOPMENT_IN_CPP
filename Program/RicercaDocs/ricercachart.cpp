#include "ricercachart.h"
#include "ui_ricercachart.h"

#include<QtCharts>
#include<QChartView>
#include<QBarSet>
#include<QBarSeries>

RicercaChart::RicercaChart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RicercaChart)
{
    ui->setupUi(this);
}

RicercaChart::~RicercaChart()
{
    delete ui;
}
QString RicercaChart::newChart()
{
    RicercaChart *newChart = new RicercaChart();
    newChart->show();

    QBarSet *set0 = new QBarSet("TEST");
       QBarSet *set1 = new QBarSet("TEST");
       QBarSet *set2 = new QBarSet("TEST");
       QBarSet *set3 = new QBarSet("TEST");

       *set0 << 1 << 2 << 3 << 4 << 5 << 6;
       *set1 << 5 << 4 << 9 << 4 << 3 << 7;
       *set2 << 2 << 8 << 8 << 10 << 8 << 0;
       *set3 << 8 << 6 << 7 << 3 << 4 << 5;
       QBarSeries *series = new QBarSeries();
       series->append(set0);
       series->append(set1);
       series->append(set2);
       series->append(set3);
       QChart *chart = new QChart();
          chart->addSeries(series);
          chart->setTitle("TEST");
          QStringList categories;
             categories << "A" << "B" << "C" << "D" << "E" ;
             QBarCategoryAxis *axisX = new QBarCategoryAxis();
             axisX->append(categories);
             chart->addAxis(axisX, Qt::AlignBottom);
             series->attachAxis(axisX);

             QValueAxis *axisY = new QValueAxis();
             axisY->setRange(0,12);
             chart->addAxis(axisY, Qt::AlignLeft);
             series->attachAxis(axisY);
             chart->legend()->setVisible(true);
                 chart->legend()->setAlignment(Qt::AlignBottom);

             QChartView *chartView = new QChartView(chart);
                chartView->setRenderHint(QPainter::Antialiasing);
                QPixmap image = chartView->grab();
                image.save("a.png", "PNG");
                QByteArray byteArray;
                QBuffer buffer(&byteArray);
                image.save(&buffer, "PNG");
                QString imageBase64 = QString::fromLatin1(byteArray.toBase64().data());
    return imageBase64;
}
