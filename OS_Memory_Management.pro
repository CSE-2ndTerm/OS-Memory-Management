QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Controllers/guicontoller.cpp \
<<<<<<< HEAD
    GUI/chart.cpp \
    GUI/mainwindow.cpp \
    GUI/processstack.cpp \
    GUI/shape.cpp \
    GUI/sketch.cpp \
=======
    GUI/holeswidget.cpp \
    GUI/mainwindow.cpp \
    GUI/processstack.cpp \
    GUI/processwidget.cpp \
>>>>>>> 7cb871d00a2c235535f323dcebf49423c41693f7
    main.cpp \

HEADERS += \
    Controllers/guicontoller.h \
<<<<<<< HEAD
    GUI/chart.h \
    GUI/mainwindow.h \
    GUI/processstack.h \
    GUI/shape.h \
    GUI/sketch.h
=======
    GUI/holeswidget.h \
    GUI/mainwindow.h \
    GUI/processstack.h \
    GUI/processwidget.h
>>>>>>> 7cb871d00a2c235535f323dcebf49423c41693f7


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \

RESOURCES += \
    style.qrc
