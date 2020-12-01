#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>
#include <QMessageBox>
#include <QCloseEvent>
#include <QFontDialog>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->textEdit,                   // Selects object in the UI
            SIGNAL(textChanged()), this,    // Gets signal slot available to object
            SLOT(documentModified()));      // Triggers slot with signal
    connect(ui->actionCut,
            SIGNAL(triggered()), ui->textEdit,
            SLOT(cut()));
    connect(ui->actionCopy,
            SIGNAL(triggered()), ui->textEdit,
            SLOT(copy()));
    connect(ui->actionPaste,
            SIGNAL(triggered()), ui->textEdit,
            SLOT(paste()));
    connect(ui->actionUndo,
            SIGNAL(triggered()), ui->textEdit,
            SLOT(undo()));
    connect(ui->actionRedo,
            SIGNAL(triggered()), ui->textEdit,
            SLOT(redo()));
    connect(ui->textEdit,
            SIGNAL(copyAvailable(bool)), ui->actionCopy,
            SLOT(setEnabled(bool)));
    connect(ui->textEdit,
            SIGNAL(cutAvailable(bool)), ui->actionCut,
            SLOT(setEnabled(bool)));
    connect(ui->textEdit,
            SIGNAL(undoAvailable(bool)), ui->actionUndo,
            SLOT(setEnabled(bool)));
    connect(ui->textEdit,
            SIGNAL(redoAvailable(bool)), ui->actionRedo,
            SLOT(setEnabled(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCredits_triggered()
{
    QMessageBox::StandardButton Reponse;   //    Creates a varaible to hold Message Box reponse from user
        Reponse = QMessageBox::information(this, tr("Credits"),
                                   tr("Ricerca Docs (Research Documents)\n\nDeveloped by: Ranul Ladduwahetty(10673986)for SOFT336SL Module\n\n"
                                      "Credits and Thanks\n\nLecturer: Mr. Marius Varga for his kind support and guidance\n\n"
                                      "Icon Artists:\nDimitry Miroliubov, Freepik, monkik, Pixel perfect, Smashicons"
                                      ));
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::StandardButton Reponse;   //    Creates a varaible to hold Message Box reponse from user
        Reponse = QMessageBox::information(this, tr("About the Ricerca Docs"),
                                   tr("Ricerca Docs (Research Documents)\n\nDeveloped by: Ranul Ladduwahetty(10673986)for SOFT336SL Module\n\n"
                                      "Features\n-Allows Rich Text Documenting\n-Allows Document Encryption\n-Allows Document Exporting\n\n"
                                      "Purpose: This application was developed to protect Intellectual Property Act, or PIPA of researchers. "
                                      "All documents would be automatically encrypted and stored, if the student needs to transfer documents they could encrypt the file and transfer it. "
                                      "This would prevent malicous users from viewing important documents on reseacher's computer."
                                      ));
}

void MainWindow::on_actionNew_triggered()
{
    MainWindow *newEditor = new MainWindow();
    newEditor->show();
}

void MainWindow::on_actionExit_triggered()
{
    qApp->closeAllWindows();
    setAttribute(Qt::WA_DeleteOnClose);
}

void MainWindow::on_actionChangeFont_triggered()
{
    bool ok;
    QFont selection = QFontDialog::getFont( &ok, ui->textEdit->currentFont(), this);
    if (ok) {

       ui->textEdit->QTextEdit::setCurrentFont(selection);
    }
}
void MainWindow::documentModified()
{
    if(windowTitle()!="Ricerca Docs[*]")
    {
        setWindowTitle(windowTitle()+"[*]");
        setWindowModified(true);
    }
}
void MainWindow::closeEvent(QCloseEvent *e)
{
     if(isWindowModified()==true)
     {
         QMessageBox::StandardButton Reponse;   //    Creates a varaible to hold Message Box reponse from user
             Reponse = QMessageBox::warning(this, tr("Document Modified"),
                                        tr("The document has been modified. Do you want to close it?\n"
                                           "You will lose all your changes."),
                                        QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
         if(Reponse == QMessageBox::No)     //      Checks reponse and hold window from closing
         {
              e->ignore();
         }
         else if(Reponse == QMessageBox::Yes)       //      Checks reponse and closes window
         {
              e->accept();
         }
     }
     else
     {
         e->accept();
     }
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                QDir::currentPath(),
                "All files (*.*)"
                );
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this,tr("Info"),file.errorString());
    QTextStream in(&file);
    ui->textEdit->setText(in.readAll());
    setWindowModified(false);
    setWindowTitle(QString("%1[*] - %2").arg(fileName.isNull()?"untitled":QFileInfo(fileName).fileName()).arg(QApplication::applicationName()));
}


void MainWindow::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(
                this,
                tr("Save File"),
                QDir::currentPath(),
                "All files (*.*)"
                );
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
        QMessageBox::information(this,tr("Info"),file.errorString());
    QTextStream out(&file);
    QString text = ui->textEdit->toHtml();
    out << text;
}

void MainWindow::on_newFile_clicked()
{
    MainWindow *newEditor = new MainWindow();
    newEditor->show();
}

void MainWindow::on_openFile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                QDir::currentPath(),
                "All files (*.*)"
                );
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this,tr("Info"),file.errorString());
    QTextStream in(&file);
    ui->textEdit->setText(in.readAll());
    setWindowModified(false);
    setWindowTitle(QString("%1[*] - %2").arg(fileName.isNull()?"untitled":QFileInfo(fileName).fileName()).arg(QApplication::applicationName()));
}

void MainWindow::on_font_clicked()
{
    bool ok;
    QFont selection = QFontDialog::getFont( &ok, ui->textEdit->currentFont(), this);
    if (ok) {

       ui->textEdit->QTextEdit::setCurrentFont(selection);
    }
}


void MainWindow::on_fontColor_clicked()
{

    QColor selection = QColorDialog::getColor(tr("Select Font Color"),this);

    ui->textEdit->QTextEdit::setTextColor(selection);
}

void MainWindow::on_cut_clicked()
{

}
