#ifndef RICERCACHART_H
#define RICERCACHART_H

#include <QWidget>


namespace Ui {
class RicercaChart;
}

class RicercaChart : public QWidget
{
    Q_OBJECT

public:
    explicit RicercaChart(QWidget *parent = nullptr);
    ~RicercaChart();
QString newChart();

private:
    Ui::RicercaChart *ui;
};

#endif // RICERCACHART_H
