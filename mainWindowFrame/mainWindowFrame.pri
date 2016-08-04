INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

HEADERS += \
    $$PWD/beginwgt.h \
    $$PWD/commoninterfacefunction.h \
    $$PWD/editcodewgt.h \
    $$PWD/menuwnd.h \
    $$PWD/nomenuwnd.h \
    $$PWD/runprogramwgt.h \
    $$PWD/setrobotwgt.h

SOURCES += \
    $$PWD/beginwgt.cpp \
    $$PWD/commoninterfacefunction.cpp \
    $$PWD/editcodewgt.cpp \
    $$PWD/menuwnd.cpp \
    $$PWD/nomenuwnd.cpp \
    $$PWD/runprogramwgt.cpp \
    $$PWD/setrobotwgt.cpp

FORMS += \
    mainWindowFrame/beginwgt.ui \
    mainWindowFrame/editcodewgt.ui \
    mainWindowFrame/menuwnd.ui \
    mainWindowFrame/nomenuwnd.ui \
    mainWindowFrame/runprogramwgt.ui \
    mainWindowFrame/setrobotwgt.ui
