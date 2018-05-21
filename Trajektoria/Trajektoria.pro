#-------------------------------------------------
#
# Project created by QtCreator 2018-05-03T13:17:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Trajektoria
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    trajektoria.cpp \
    pliki.cpp \
    atmosfera.cpp \
    listy.cpp \
    baza_obiektow.cpp \
    savedialog.cpp \
    analiza.cpp \
    autor.cpp \
    obraz.cpp \
    pokaz_traj.cpp

HEADERS  += mainwindow.h \
    trajektoria.h \
    punkt.h \
    pliki.h \
    atmosfera.h \
    listy.h \
    baza_obiektow.h \
    savedialog.h \
    analiza.h \
    autor.h \
    obraz.h \
    pokaz_traj.h

FORMS    += mainwindow.ui \
    savedialog.ui \
    autor.ui \
    pokaz_traj.ui
