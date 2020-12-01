#include "mainwindow.h"
#include <QSplashScreen>
#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("Ricerca Docs");
    a.setApplicationVersion("1.0");
    a.setApplicationDisplayName("Ricerca Docs");
    QPixmap pixmap(":/assets/screen/splash.png");
    QSplashScreen *splash = new QSplashScreen(pixmap, Qt::WindowStaysOnTopHint);
    splash->show();
    splash->showMessage("Please wait....");
    splash->showMessage("Loading modules...");
    QTimer::singleShot(2000, splash, &QWidget::close);
    a.processEvents();
    MainWindow w;
    w.show();
   // splash.finish(&w);
    return a.exec();
}
