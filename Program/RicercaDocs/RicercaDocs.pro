QT += core gui
QT += printsupport
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



SOURCES += \
    main.cpp \
    mainwindow.cpp \
    ricercachart.cpp \
    simplecrypt.cpp

HEADERS += \
    mainwindow.h \
    ricercachart.h \
    simplecrypt.h

FORMS += \
    mainwindow.ui \
    ricercachart.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RC_ICONS =  assets/screen/logo.ico
VERSION = 1.0.0.0

RESOURCES += \
    assets.qrc

DISTFILES += \
    assets/icons/chart.png \
    assets/icons/copy.png \
    assets/icons/cut.png \
    assets/icons/encryption.png \
    assets/icons/font.png \
    assets/icons/image.png \
    assets/icons/new.png \
    assets/icons/open.png \
    assets/icons/pdf.png \
    assets/icons/redo.png \
    assets/icons/save.png \
    assets/icons/undo.png \
    assets/screen/logo.png \
    assets/screen/splash.png
