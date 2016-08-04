#-------------------------------------------------
#
# Project created by QtCreator 2016-07-30T21:02:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TripleSpace
TEMPLATE = app

include($$PWD\mainWindowFrame\mainWindowFrame.pri)
include($$PWD\childWindows\childWindows.pri)

SOURCES += main.cpp

HEADERS  += globalmacro.h

