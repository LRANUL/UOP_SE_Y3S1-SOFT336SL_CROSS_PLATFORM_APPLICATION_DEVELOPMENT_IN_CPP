#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionCredits_triggered();

    void on_actionAbout_triggered();

    void on_actionNew_triggered();

    void on_actionExit_triggered();

    void on_actionChangeFont_triggered();

    void documentModified();

private:
    Ui::MainWindow *ui;
    QTextEdit textEdit;
    QString m_fileName;
    void loadFile(const QString &fileName);

protected:
 void closeEvent(QCloseEvent *e);

};
#endif // MAINWINDOW_H
