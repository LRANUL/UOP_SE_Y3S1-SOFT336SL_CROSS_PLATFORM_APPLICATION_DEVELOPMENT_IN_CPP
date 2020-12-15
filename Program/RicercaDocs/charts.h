#ifndef CHARTS_H
#define CHARTS_H
#include <QtCharts>

namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionCredits_triggered();

#endif // CHARTS_H
