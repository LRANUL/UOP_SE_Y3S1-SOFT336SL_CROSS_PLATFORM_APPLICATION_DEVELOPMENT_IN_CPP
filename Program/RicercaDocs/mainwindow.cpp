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
//#include <ricercachart.h>
#include <QInputDialog>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>

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

// Opens a new window, creates a new note-taking window, creates a new object of the main window
void MainWindow::on_actionNew_triggered()
{
    on_newFile_clicked();
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
  on_font_clicked();
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
    on_openFile_clicked();
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

/* Opens document files both encypted and non encrypte files, conditions
  * setup to manage process.
*/
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
/* Font editor allows text type style changing 
 * */
void MainWindow::on_font_clicked()
{
    bool ok;
    QFont selection = QFontDialog::getFont(&ok, ui->textEdit->currentFont(), this);
    if (ok)
    {

        ui->textEdit->QTextEdit::setCurrentFont(selection);
    }
}
/* Font editor allows text color style changing 
 * */
void MainWindow::on_fontColor_clicked()
{

    QColor selection = QColorDialog::getColor(tr("Select Font Color"), this);

    ui->textEdit->QTextEdit::setTextColor(selection);
}
/* Calls simplecrypt third party library to handle data encrytion requests
*/
void MainWindow::on_encrypt_clicked()
{
    on_actionEncrypt_triggered();

}
/* Calls simplecrypt third party library to handle data encrytion requests
*/
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
/* Document to PDF export method uses inbult libraries and predefined settings.
*/
void MainWindow::on_actionExport_triggered()
{
   on_exportPDF_clicked();
}
/* Document to PDF export method uses inbult libraries and predefined settings.
*/
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
/* Document to mime data addtion method.
*/
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
/* Uses QtCharts an external compoenent of Qt, mandatory for future development
 * basic handling of chart creation.
*/
void MainWindow::on_insertChart_clicked()
{
    QStringList items;
    items << tr("Line Chart") << tr("Pie Chart") << tr("Bar Chart");

    bool ok;
    QString item = QInputDialog::getItem(this, "Select Chart Type",
                                         tr("Chart Type:"), items, 0, false, &ok);

    if (ok == false)
    {
    }
    else if (item == "Line Chart")
    {
        lineChart();
    }
    else if (item == "Pie Chart")
    {
        pieChart();
    }
    else if (item == "Bar Chart")
    {
        barChart();
    }
}// Line Chart method
void MainWindow::lineChart()
{

    QString chartName = QInputDialog::getText(this, tr("Provide Chart Name"),
                                              tr("Chart Name: "), QLineEdit::Normal);
    int coordinates = QInputDialog::getInt(this, tr("Provide Total Coordinates"),
                                           tr("No of coordinates: "), QLineEdit::Normal);
    int x[coordinates];
    int y[coordinates];
    for (int i = 0; i < coordinates; i++)
    {
        x[i] = QInputDialog::getInt(this, tr("X-Axis Coordinates"), "Value for x" + QString::number(i + 1) + ":", QLineEdit::Normal);

        y[i] = QInputDialog::getInt(this, tr("Y-Axis Coordinates"), "Value for y" + QString::number(i + 1) + ":", QLineEdit::Normal);
    }
    QLineSeries *series = new QLineSeries();
    for (int i = 0; i < coordinates; i++)
    {
        series->append(x[i], y[i]);
    }

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle(chartName);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    QPixmap image = chartView->grab();
    image.save("chart.png", "PNG");
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    image.save(&buffer, "PNG");
    QString imageBase64 = QString::fromLatin1(byteArray.toBase64().data());

    QString embededChart = ui->textEdit->toHtml() + "<img src="
                                                    "data:image/png;base64," +
                           imageBase64 + "/>";
    ui->textEdit->setHtml(embededChart);
}
// Pie chart method
void MainWindow::pieChart()
{
    QString chartName = QInputDialog::getText(this, tr("Provide Chart Name"),
                                              tr("Chart Name: "), QLineEdit::Normal);
    int values = QInputDialog::getInt(this, tr("Total Chart Values"),
                                      tr("No of Values: "), QLineEdit::Normal);
    QString valueName[values];
    int value[values];
    for (int i = 0; i < values; i++)
    {
        valueName[i] = QInputDialog::getText(this, tr("Series Name "), "Name: ", QLineEdit::Normal);

        value[i] = QInputDialog::getInt(this, tr("Series Value"), "Value for Serie " + valueName[i] + ":", QLineEdit::Normal);
    }
    QPieSeries *series = new QPieSeries();
    for (int i = 0; i < values; i++)
    {
        series->append(valueName[i], value[i]);
    }
    QPieSlice *slice = series->slices().at(1);
    slice->setExploded();
    slice->setLabelVisible();
    slice->setPen(QPen(Qt::darkBlue, 3));
    slice->setBrush(Qt::red);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(chartName);
    chart->legend()->hide();
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    QPixmap image = chartView->grab();
    image.save("chart.png", "PNG");
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    image.save(&buffer, "PNG");
    QString imageBase64 = QString::fromLatin1(byteArray.toBase64().data());

    QString embededChart = ui->textEdit->toHtml() + "<img src="
                                                    "data:image/png;base64," +
                           imageBase64 + "/>";
    ui->textEdit->setHtml(embededChart);
}
// Bar chart method
void MainWindow::barChart()
{
    QString chartName = QInputDialog::getText(this, tr("Provide Chart Name"),
                                              tr("Chart Name:"), QLineEdit::Normal);
    int serie = QInputDialog::getInt(this, tr("Provide Total Series"),
                                     tr("No of Series:"), QLineEdit::Normal);
    int sets = QInputDialog::getInt(this, tr("Provide Total Sets"),
                                    tr("No of Sets:"), QLineEdit::Normal);

    QString setName[sets];
    int setValue[sets];
    QBarSeries *series = new QBarSeries();
    for (int i = 0; i < serie; i++)
    {
        setName[i] = QInputDialog::getText(this, tr("Set Name"), "Name for set - " + QString::number(i + 1) + ":", QLineEdit::Normal);

        for (int i = 0; i < sets; i++)
        {
            setValue[i] = QInputDialog::getInt(this, tr("Set Value"), "Value " + QString::number(i + 1) + " :", QLineEdit::Normal);
            QBarSet *set[i];
            set[i] = new QBarSet(setName[i]);
            *set[i] << setValue[i];
            series->append(set[i]);
        }
    }

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle(chartName);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    QPixmap image = chartView->grab();
    image.save("chart.png", "PNG");
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    image.save(&buffer, "PNG");
    QString imageBase64 = QString::fromLatin1(byteArray.toBase64().data());

    QString embededChart = ui->textEdit->toHtml() + "<img src="
                                                    "data:image/png;base64," +
                           imageBase64 + "/>";
    ui->textEdit->setHtml(embededChart);
}
/*  HOLD DEVELOPMENT DUE TO BUGS IDENTIFIED ON THE CALL BACK FUNCTION
 *  ASSUMING AN ISSUE WITH REFERENCES AND SHOWS FURTHER REQUIREMENT TO THE USE OF EVENT- DRIVEN FRAMEWORK
 *  FURTHER DEVELOPMENT TIME AND TESTING IS REQUIRED.
 *
 *  WORK HALTED HERE DUE TO PROJECT DELIVERY ON 7TH JANUARY 2021
 *
void MainWindow::on_insertChart_clicked()
{
//    RicercaChart chart;
//    QString imageBase64 = chart.newChart();
//    chart.newChart();
//    qWarning() << imageBase64 + "MAINFUNC";
//    QString embededChart = ui->textEdit->toHtml() + "<img src="
//                                                    "data:image/png;base64," +
//                           imageBase64 + "/>";
//    ui->textEdit->setHtml(embededChart);
}

void MainWindow::addChart_clicked(QString chart)
{

    QString imageBase64 = chart;

    QString embededChart = MainWindow::ui->textEdit->toHtml() + "<img src=data:image/png;base64," + imageBase64 + "/>";

    MainWindow::ui->textEdit->setHtml(embededChart);

    qWarning() <<  "MAIN";
}
*/
