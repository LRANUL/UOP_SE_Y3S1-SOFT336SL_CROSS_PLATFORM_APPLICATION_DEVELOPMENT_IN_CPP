#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QFile>

QT_BEGIN_NAMESPACE
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

    void on_actionAbout_triggered();

    void on_actionNew_triggered();

    void on_actionExit_triggered();

    void on_actionChangeFont_triggered();

    void documentModified();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_newFile_clicked();

    void on_openFile_clicked();

    void on_font_clicked();

    void on_fontColor_clicked();

    void on_encrypt_clicked();

    void on_actionEncrypt_triggered();

    void on_actionExport_triggered();

    void on_exportPDF_clicked();

    void on_insertImage_clicked();

    void enableAutoEncryption();

private:
    Ui::MainWindow *ui;

protected:
    void closeEvent(QCloseEvent *e);
};
#endif // MAINWINDOW_H
