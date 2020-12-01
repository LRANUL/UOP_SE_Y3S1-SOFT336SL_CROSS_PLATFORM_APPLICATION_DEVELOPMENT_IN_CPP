/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionCredits;
    QAction *actionChangeFont;
    QAction *actionExit;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionOpen;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionExport;
    QAction *actionEncrypt;
    QAction *actionNew;
    QAction *actionSave;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QTabWidget *tabWidget;
    QWidget *design;
    QHBoxLayout *horizontalLayout;
    QPushButton *newFile;
    QPushButton *openFile;
    QPushButton *font;
    QPushButton *fontColor;
    QWidget *manage;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *exportPDF;
    QPushButton *encrypt;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuView;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 700);
        MainWindow->setMinimumSize(QSize(1000, 700));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8(":assets/screen/logo.png")));
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCredits = new QAction(MainWindow);
        actionCredits->setObjectName(QString::fromUtf8("actionCredits"));
        actionChangeFont = new QAction(MainWindow);
        actionChangeFont->setObjectName(QString::fromUtf8("actionChangeFont"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/icons/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChangeFont->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/assets/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/assets/icons/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon9);
        actionEncrypt = new QAction(MainWindow);
        actionEncrypt->setObjectName(QString::fromUtf8("actionEncrypt"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/assets/icons/encryption.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEncrypt->setIcon(icon10);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/assets/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon11);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/assets/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon12);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 0));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        frame->setMidLineWidth(0);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setFrameShadow(QFrame::Plain);
        textEdit->setLineWidth(1);

        gridLayout_2->addWidget(textEdit, 2, 0, 1, 1);

        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 100));
        tabWidget->setMaximumSize(QSize(16777215, 100));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        design = new QWidget();
        design->setObjectName(QString::fromUtf8("design"));
        horizontalLayout = new QHBoxLayout(design);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newFile = new QPushButton(design);
        newFile->setObjectName(QString::fromUtf8("newFile"));
        newFile->setMinimumSize(QSize(0, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Nova Light"));
        font2.setPointSize(10);
        newFile->setFont(font2);
        newFile->setFocusPolicy(Qt::StrongFocus);
        newFile->setLayoutDirection(Qt::LeftToRight);
        newFile->setAutoFillBackground(false);
        newFile->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
"text-align:bottom;"));
        QIcon icon13(QIcon::fromTheme(QString::fromUtf8(":assets/icons/new.png")));
        newFile->setIcon(icon13);
        newFile->setIconSize(QSize(60, 60));
        newFile->setFlat(true);

        horizontalLayout->addWidget(newFile);

        openFile = new QPushButton(design);
        openFile->setObjectName(QString::fromUtf8("openFile"));
        openFile->setMinimumSize(QSize(0, 60));
        openFile->setFont(font2);
        openFile->setFocusPolicy(Qt::StrongFocus);
        openFile->setLayoutDirection(Qt::LeftToRight);
        openFile->setAutoFillBackground(false);
        openFile->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon14(QIcon::fromTheme(QString::fromUtf8(":assets/icons/open.png")));
        openFile->setIcon(icon14);
        openFile->setIconSize(QSize(60, 60));
        openFile->setFlat(true);

        horizontalLayout->addWidget(openFile);

        font = new QPushButton(design);
        font->setObjectName(QString::fromUtf8("font"));
        font->setMinimumSize(QSize(0, 60));
        font->setFont(font2);
        font->setFocusPolicy(Qt::StrongFocus);
        font->setLayoutDirection(Qt::LeftToRight);
        font->setAutoFillBackground(false);
        font->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon15(QIcon::fromTheme(QString::fromUtf8(":assets/icons/font.png")));
        font->setIcon(icon15);
        font->setIconSize(QSize(60, 60));
        font->setFlat(true);

        horizontalLayout->addWidget(font);

        fontColor = new QPushButton(design);
        fontColor->setObjectName(QString::fromUtf8("fontColor"));
        fontColor->setMinimumSize(QSize(0, 60));
        fontColor->setFont(font2);
        fontColor->setFocusPolicy(Qt::StrongFocus);
        fontColor->setLayoutDirection(Qt::LeftToRight);
        fontColor->setAutoFillBackground(false);
        fontColor->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon16(QIcon::fromTheme(QString::fromUtf8(":assets/icons/fontColor.png")));
        fontColor->setIcon(icon16);
        fontColor->setIconSize(QSize(60, 60));
        fontColor->setFlat(true);

        horizontalLayout->addWidget(fontColor);

        tabWidget->addTab(design, QString());
        manage = new QWidget();
        manage->setObjectName(QString::fromUtf8("manage"));
        horizontalLayout_3 = new QHBoxLayout(manage);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        exportPDF = new QPushButton(manage);
        exportPDF->setObjectName(QString::fromUtf8("exportPDF"));
        exportPDF->setMinimumSize(QSize(0, 60));
        exportPDF->setFont(font2);
        exportPDF->setFocusPolicy(Qt::StrongFocus);
        exportPDF->setLayoutDirection(Qt::LeftToRight);
        exportPDF->setAutoFillBackground(false);
        exportPDF->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon17(QIcon::fromTheme(QString::fromUtf8(":assets/icons/pdf.png")));
        exportPDF->setIcon(icon17);
        exportPDF->setIconSize(QSize(60, 60));
        exportPDF->setFlat(true);

        horizontalLayout_3->addWidget(exportPDF);

        encrypt = new QPushButton(manage);
        encrypt->setObjectName(QString::fromUtf8("encrypt"));
        encrypt->setMinimumSize(QSize(0, 60));
        encrypt->setFont(font2);
        encrypt->setFocusPolicy(Qt::StrongFocus);
        encrypt->setLayoutDirection(Qt::LeftToRight);
        encrypt->setAutoFillBackground(false);
        encrypt->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon18(QIcon::fromTheme(QString::fromUtf8(":assets/icons/encryption.png")));
        encrypt->setIcon(icon18);
        encrypt->setIconSize(QSize(60, 60));
        encrypt->setFlat(true);

        horizontalLayout_3->addWidget(encrypt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        tabWidget->addTab(manage, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 1, 0, 2, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuView->addAction(actionExport);
        menuView->addAction(actionEncrypt);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionCredits);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionChangeFont);
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Ricerca Docs", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionCredits->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
        actionChangeFont->setText(QCoreApplication::translate("MainWindow", "Change Font", nullptr));
#if QT_CONFIG(tooltip)
        actionChangeFont->setToolTip(QCoreApplication::translate("MainWindow", "Change document font", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "Exit the application", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        actionCut->setToolTip(QCoreApplication::translate("MainWindow", "Cut text", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("MainWindow", "Copy text", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("MainWindow", "Paste text", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "Open Document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport->setText(QCoreApplication::translate("MainWindow", "Export File", nullptr));
#if QT_CONFIG(tooltip)
        actionExport->setToolTip(QCoreApplication::translate("MainWindow", "Export to PDF", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExport->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEncrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt File", nullptr));
#if QT_CONFIG(tooltip)
        actionEncrypt->setToolTip(QCoreApplication::translate("MainWindow", "Encrypt document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEncrypt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "Create new document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MainWindow", "Save document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        newFile->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
        openFile->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        font->setText(QCoreApplication::translate("MainWindow", "Font Type", nullptr));
        fontColor->setText(QCoreApplication::translate("MainWindow", "Font Color", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(design), QCoreApplication::translate("MainWindow", "Design", nullptr));
        exportPDF->setText(QCoreApplication::translate("MainWindow", "Export to PDF", nullptr));
        encrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt Document", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(manage), QCoreApplication::translate("MainWindow", "Manage", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
