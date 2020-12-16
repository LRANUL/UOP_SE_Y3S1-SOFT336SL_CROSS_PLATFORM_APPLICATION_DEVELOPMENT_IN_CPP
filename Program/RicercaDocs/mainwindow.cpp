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
#include <simplecrypt.h>
#include <QBuffer>
#include <QPdfWriter>
#include <QPrinter>
#include <QImageReader>
#include <ricercachart.h>

//#include<QtCharts>
//#include<QChartView>
//#include<QBarSet>
//#include<QBarSeries>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Informs user that the document is modified, as a common standard Window Title/Document Name with an asterix '*' is added
    this->setWindowTitle(windowTitle() + "[*]");

    // The Trigger to catch text changes and activate DocumentModified method
    connect(ui->textEdit,
            SIGNAL(textChanged()), this,
            SLOT(documentModified()));

    // All triggers below activates inbuilt actions of basic document formating such as copy paste.
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
    // Trigger to check option on   encryption to manage document saving process
    connect(ui->actionAuto_Encrypt,
            SIGNAL(toggled()), this,
            SLOT(enableAutoEncryption()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::enableAutoEncryption()
{
    ui->actionAuto_Encrypt->setChecked(true);
}
// Opens a Qt message box to display credits to supports and authors of the application
void MainWindow::on_actionCredits_triggered()
{
    QMessageBox::information(this, tr("Credits"),
                             tr("Ricerca Docs (Research Documents)\n\nDeveloped by: Ranul Ladduwahetty(10673986)for SOFT336SL Module\n\n"
                                "Credits and Thanks\n\nLecturer: Mr. Marius Varga for his support and guidance\n\n"
                                "Icon Artists:\nDimitry Miroliubov, Freepik, monkik, Pixel perfect, Smashicons, Rawpixel"));
}

// Opens a Qt message box to display information about the application
void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, tr("About the Ricerca Docs"),
                             tr("Ricerca Docs (Research Documents)\n\nDeveloped by: Ranul Ladduwahetty(10673986)for SOFT336SL Module\n\n"
                                "Features\n-Allows Rich Text Documenting\n-Allows Document Encryption\n-Allows Document Exporting\n\n"
                                "Purpose: This application was developed to protect Intellectual Property Act, or PIPA of researchers. "
                                "All documents would be automatically encrypted and stored, if the student needs to transfer documents they could encrypt the file and transfer it. "
                                "This would prevent malicous users from viewing important documents on reseacher's computer."));
}

// Opens a new window, creates a new note-taking window
void MainWindow::on_actionNew_triggered()
{
    MainWindow *newEditor = new MainWindow();
    newEditor->show();
}

// Manages memory and temporary data by closing all child windows and processed once the parent window receives and exit call
void MainWindow::on_actionExit_triggered()
{
    qApp->closeAllWindows();
    setAttribute(Qt::WA_DeleteOnClose);
}

// Opens a Font selection dialog to apply font type styles to text of notes-taking app
void MainWindow::on_actionChangeFont_triggered()
{
    bool ok;
    QFont selection = QFontDialog::getFont(&ok, ui->textEdit->currentFont(), this);
    if (ok)
    {

        ui->textEdit->QTextEdit::setCurrentFont(selection);
    }
}

// Calls the setwindowModified method once the textchange event is triggered and causes an update to title
void MainWindow::documentModified()
{
    setWindowModified(true);
}

/*
 * Opens a Qt message box preventing data loss by unexpected application closure by user end, depending on
 * user selection the Window may remain for further editing, saving the document or might dismiss changes and
 * close the window, however the application will not sustain the data if it fails due to a techical error.
*/
void MainWindow::closeEvent(QCloseEvent *e)
{
    if (isWindowModified() == true)
    {
        QMessageBox::StandardButton Reponse; //    Creates a varaible to hold Message Box reponse from user
        Reponse = QMessageBox::warning(this, tr("Document Modified"),
                                       tr("The document has been modified. Do you want to close it?\n"
                                          "You will lose all your changes."),
                                       QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
        if (Reponse == QMessageBox::No) //      Checks reponse and hold window from closing
        {
            e->ignore();
        }
        else if (Reponse == QMessageBox::Yes) //      Checks reponse and closes window
        {
            e->accept();
        }
    }
    else
    {
        e->accept();
    }
}
/* Opens the open file dialog of the native environment on installed location, once a file is selected user would be prompted
 * to select on the document status whthe encrypted or not, once the selection is made revelant methods would get triggered to
 * open the file as expected by user. This method allows the user to open and work with files from external environments other
 * than Ricerca Docs, also text file format is used to retain portability of files among systems and to provide compatiblity for
 * cloud storage.
*/
void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Open File"),
        QDir::currentPath(),
        "All files (*.*)");
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this, tr("Info"), file.errorString());
    else
    {
        QTextStream documentinput(&file);
        QString text = documentinput.readAll();
        QMessageBox::StandardButton Reponse; //    Creates a varaible to hold Message Box reponse from user
        Reponse = QMessageBox::warning(this, tr("Document Security Check"),
                                       tr("Select 'Yes' Option if file is encrypted\n"
                                          "Select 'No' Option if file is not encrypted\n\n"
                                          "In a event the the opened file is courrpted or blank try opening as a non encrypted file."),
                                       QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
        if (Reponse == QMessageBox::No) //      Checks reponse and hold window from closing
        {
            ui->textEdit->setText(text);
            setWindowModified(false);
            setWindowTitle(QString("%1[*] - %2").arg(fileName.isNull() ? "untitled" : QFileInfo(fileName).fileName()).arg(QApplication::applicationName()));
        }
        else if (Reponse == QMessageBox::Yes) //      Checks reponse and closes window
        {
            SimpleCrypt crypto(Q_UINT64_C(52696365726361));
            QString decrypted = crypto.decryptToString(text);
            ui->textEdit->setText(decrypted);
            setWindowModified(false);
            setWindowTitle(QString("%1[*] - %2").arg(fileName.isNull() ? "untitled" : QFileInfo(fileName).fileName()).arg(QApplication::applicationName()));
        }
    }
}
/* Save the working document to a user prefered location, user is provide with a file save dialog fro selecting the save location
 * However this will not encrypt the file unless done manually or if 'Auto Encrypt' function is enabled.
*/
void MainWindow::on_actionSave_triggered()
{
    if (ui->actionAuto_Encrypt->isChecked())
    {
        on_encrypt_clicked();
    }
    else
    {
        QString fileName = QFileDialog::getSaveFileName(
            this,
            tr("Save File"),
            QDir::currentPath(),
            "Text files (*.txt)");
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
            QMessageBox::information(this, tr("Info"), file.errorString());
        QTextStream documentoutput(&file);
        QString text = ui->textEdit->toHtml();
        documentoutput << text;
        setWindowModified(false);
        setWindowTitle(QString("%1[*] - %2").arg(fileName.isNull() ? "untitled" : QFileInfo(fileName).fileName()).arg(QApplication::applicationName()));
    }
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
        "Text files (*.txt)");
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this, tr("Info"), file.errorString());
    else
    {
        QTextStream documentinput(&file);
        QString text = documentinput.readAll();
        QMessageBox::StandardButton Reponse; //    Creates a varaible to hold Message Box reponse from user
        Reponse = QMessageBox::warning(this, tr("Document Security Check"),
                                       tr("Select 'Yes' Option if file is encrypted\n"
                                          "Select 'No' Option if file is not encrypted\n\n"
                                          "In a event the the opened file is courrpted or blank try opening as a non encrypted file."),
                                       QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
        if (Reponse == QMessageBox::No) //      Checks reponse and hold window from closing
        {
            ui->textEdit->setText(text);
            setWindowModified(false);
            setWindowTitle(QString("%1[*] - %2").arg(fileName.isNull() ? "untitled" : QFileInfo(fileName).fileName()).arg(QApplication::applicationName()));
        }
        else if (Reponse == QMessageBox::Yes) //      Checks reponse and closes window
        {
            SimpleCrypt crypto(Q_UINT64_C(52696365726361));
            QString decrypted = crypto.decryptToString(text);
            ui->textEdit->setText(decrypted);
            setWindowModified(false);
            setWindowTitle(QString("%1[*] - %2").arg(fileName.isNull() ? "untitled" : QFileInfo(fileName).fileName()).arg(QApplication::applicationName()));
        }
    }
}

void MainWindow::on_font_clicked()
{
    bool ok;
    QFont selection = QFontDialog::getFont(&ok, ui->textEdit->currentFont(), this);
    if (ok)
    {

        ui->textEdit->QTextEdit::setCurrentFont(selection);
    }
}

void MainWindow::on_fontColor_clicked()
{

    QColor selection = QColorDialog::getColor(tr("Select Font Color"), this);

    ui->textEdit->QTextEdit::setTextColor(selection);
}

void MainWindow::on_encrypt_clicked()
{
    SimpleCrypt crypto(52696365726361);                             // Ricerca Hex value used
    crypto.setCompressionMode(SimpleCrypt::CompressionAlways);      // data compress
    crypto.setIntegrityProtectionMode(SimpleCrypt::ProtectionHash); // hash protect for data integrity

    QString text = ui->textEdit->toHtml();
    QString CypherText = crypto.encryptToString(text);
    if (crypto.lastError() == SimpleCrypt::ErrorNoError)
    {
        QString fileName = QFileDialog::getSaveFileName(
            this,
            tr("Save File"),
            QDir::currentPath(),
            "Text Document (*.txt)");
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
            QMessageBox::information(this, tr("Info"), file.errorString());
        QTextStream documentoutput(&file);
        documentoutput << CypherText;
        setWindowModified(false);
        setWindowTitle(QString("%1[*] - %2").arg(fileName.isNull() ? "untitled" : QFileInfo(fileName).fileName()).arg(QApplication::applicationName()));
    }
}

void MainWindow::on_actionEncrypt_triggered()
{
    SimpleCrypt crypto(52696365726361);                             // Ricerca Hex value used
    crypto.setCompressionMode(SimpleCrypt::CompressionAlways);      // data compress
    crypto.setIntegrityProtectionMode(SimpleCrypt::ProtectionHash); // hash protect for data integrity

    QString text = ui->textEdit->toHtml();
    QString CypherText = crypto.encryptToString(text);
    if (crypto.lastError() == SimpleCrypt::ErrorNoError)
    {
        QString fileName = QFileDialog::getSaveFileName(
            this,
            tr("Save File"),
            QDir::currentPath(),
            "Text Document (*.txt)");
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
            QMessageBox::information(this, tr("Info"), file.errorString());
        QTextStream documentoutput(&file);
        documentoutput << CypherText;
        setWindowModified(false);
        setWindowTitle(QString("%1[*] - %2").arg(fileName.isNull() ? "untitled" : QFileInfo(fileName).fileName()).arg(QApplication::applicationName()));
    }
}

void MainWindow::on_actionExport_triggered()
{
    QString fileName = QFileDialog::getSaveFileName((QWidget *)0, "Export to PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty())
    {
        fileName.append(".pdf");
    }
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(fileName);
    QTextDocument doc;
    doc.setHtml(ui->textEdit->toHtml());
    doc.setPageSize(printer.pageRect().size());
    doc.print(&printer);
}

void MainWindow::on_exportPDF_clicked()
{
    QString fileName = QFileDialog::getSaveFileName((QWidget *)0, "Export to PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty())
    {
        fileName.append(".pdf");
    }
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(fileName);
    QTextDocument doc;
    doc.setHtml(ui->textEdit->toHtml());
    doc.setPageSize(printer.pageRect().size());
    doc.print(&printer);
}

void MainWindow::on_insertImage_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Select an Image"),
        QDir::currentPath(),
        "JPEG files (*.jpg *jpeg)\n"
        "GIF (*.gif)\n"
        "PNG (*.png)");
    QImage image = QImageReader(fileName).read();
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    image.save(&buffer, "PNG");
    QString imageBase64 = QString::fromLatin1(byteArray.toBase64().data());
    QString embedImage = ui->textEdit->toHtml() + "<img src="
                                                  "data:image/png;base64," +
                         imageBase64 + "/>";
    ui->textEdit->setHtml(embedImage);
}

void MainWindow::on_insertChart_clicked()
{
    RicercaChart chart;
    QString imageBase64 = chart.newChart();

    QString embededChart = ui->textEdit->toHtml() + "<img src="
                                                    "data:image/png;base64," +
                           imageBase64 + "/>";
    ui->textEdit->setHtml(embededChart);
}
