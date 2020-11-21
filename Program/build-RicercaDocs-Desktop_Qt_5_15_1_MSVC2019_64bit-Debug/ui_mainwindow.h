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
    QAction *actionNew;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QTabWidget *tabWidget;
    QWidget *design;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *newFile;
    QPushButton *copy;
    QPushButton *cut;
    QPushButton *font;
    QPushButton *openFile;
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
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8(":assets/icons/new.png")));
        actionNew->setIcon(icon1);
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
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
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
        gridLayout_3 = new QGridLayout(design);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 7, 1, 1);

        newFile = new QPushButton(design);
        newFile->setObjectName(QString::fromUtf8("newFile"));
        newFile->setMinimumSize(QSize(0, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Nova Light"));
        font2.setPointSize(14);
        newFile->setFont(font2);
        newFile->setFocusPolicy(Qt::StrongFocus);
        newFile->setLayoutDirection(Qt::LeftToRight);
        newFile->setAutoFillBackground(false);
        newFile->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        newFile->setIcon(icon1);
        newFile->setIconSize(QSize(60, 60));
        newFile->setFlat(true);

        gridLayout_3->addWidget(newFile, 0, 0, 1, 1);

        copy = new QPushButton(design);
        copy->setObjectName(QString::fromUtf8("copy"));
        copy->setMinimumSize(QSize(0, 60));
        copy->setFont(font2);
        copy->setFocusPolicy(Qt::StrongFocus);
        copy->setLayoutDirection(Qt::LeftToRight);
        copy->setAutoFillBackground(false);
        copy->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8(":assets/icons/copy.png")));
        copy->setIcon(icon2);
        copy->setIconSize(QSize(60, 60));
        copy->setFlat(true);

        gridLayout_3->addWidget(copy, 0, 4, 2, 1);

        cut = new QPushButton(design);
        cut->setObjectName(QString::fromUtf8("cut"));
        cut->setMinimumSize(QSize(0, 60));
        cut->setFont(font2);
        cut->setFocusPolicy(Qt::StrongFocus);
        cut->setLayoutDirection(Qt::LeftToRight);
        cut->setAutoFillBackground(false);
        cut->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8(":assets/icons/cut.png")));
        cut->setIcon(icon3);
        cut->setIconSize(QSize(60, 60));
        cut->setFlat(true);

        gridLayout_3->addWidget(cut, 0, 3, 2, 1);

        font = new QPushButton(design);
        font->setObjectName(QString::fromUtf8("font"));
        font->setMinimumSize(QSize(0, 60));
        font->setFont(font2);
        font->setFocusPolicy(Qt::StrongFocus);
        font->setLayoutDirection(Qt::LeftToRight);
        font->setAutoFillBackground(false);
        font->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8(":assets/icons/font.png")));
        font->setIcon(icon4);
        font->setIconSize(QSize(60, 60));
        font->setFlat(true);

        gridLayout_3->addWidget(font, 0, 2, 2, 1);

        openFile = new QPushButton(design);
        openFile->setObjectName(QString::fromUtf8("openFile"));
        openFile->setMinimumSize(QSize(0, 60));
        openFile->setFont(font2);
        openFile->setFocusPolicy(Qt::StrongFocus);
        openFile->setLayoutDirection(Qt::LeftToRight);
        openFile->setAutoFillBackground(false);
        openFile->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon5(QIcon::fromTheme(QString::fromUtf8(":assets/icons/open.png")));
        openFile->setIcon(icon5);
        openFile->setIconSize(QSize(60, 60));
        openFile->setFlat(true);

        gridLayout_3->addWidget(openFile, 0, 1, 1, 1);

        tabWidget->addTab(design, QString());
        manage = new QWidget();
        manage->setObjectName(QString::fromUtf8("manage"));
        horizontalLayout_3 = new QHBoxLayout(manage);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        exportPDF = new QPushButton(manage);
        exportPDF->setObjectName(QString::fromUtf8("exportPDF"));
        exportPDF->setMinimumSize(QSize(0, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Nova Light"));
        font3.setPointSize(10);
        exportPDF->setFont(font3);
        exportPDF->setFocusPolicy(Qt::StrongFocus);
        exportPDF->setLayoutDirection(Qt::LeftToRight);
        exportPDF->setAutoFillBackground(false);
        exportPDF->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon6(QIcon::fromTheme(QString::fromUtf8(":assets/icons/pdf.png")));
        exportPDF->setIcon(icon6);
        exportPDF->setIconSize(QSize(60, 60));
        exportPDF->setFlat(true);

        horizontalLayout_3->addWidget(exportPDF);

        encrypt = new QPushButton(manage);
        encrypt->setObjectName(QString::fromUtf8("encrypt"));
        encrypt->setMinimumSize(QSize(0, 60));
        encrypt->setFont(font3);
        encrypt->setFocusPolicy(Qt::StrongFocus);
        encrypt->setLayoutDirection(Qt::LeftToRight);
        encrypt->setAutoFillBackground(false);
        encrypt->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        QIcon icon7(QIcon::fromTheme(QString::fromUtf8(":assets/icons/encryption.png")));
        encrypt->setIcon(icon7);
        encrypt->setIconSize(QSize(60, 60));
        encrypt->setFlat(true);

        horizontalLayout_3->addWidget(encrypt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        tabWidget->addTab(manage, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);


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
        menuFile->addAction(actionNew);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Ricerca Docs", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        newFile->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
        copy->setText(QCoreApplication::translate("MainWindow", "Copy/Paste", nullptr));
        cut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        font->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
        openFile->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(design), QCoreApplication::translate("MainWindow", "Design", nullptr));
        exportPDF->setText(QCoreApplication::translate("MainWindow", "Export to PDF", nullptr));
        encrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt Document", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(manage), QCoreApplication::translate("MainWindow", "Manage", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
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
