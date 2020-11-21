#include "mainwindow.h"
#include <QSplashScreen>
#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap(":/assets/screen/splash.png");
    QSplashScreen *splash = new QSplashScreen(pixmap, Qt::WindowStaysOnTopHint);
    splash->show();
    QTimer::singleShot(3000, splash, &QWidget::close);
    a.processEvents();
    MainWindow w;
    w.show();
   // splash.finish(&w);
    return a.exec();
}
