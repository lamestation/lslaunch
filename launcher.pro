QT += gui widgets
CONFIG -= app_bundle debug_and_release

TARGET = lslauncher
TEMPLATE = app
DESTDIR = bin/

SOURCES += \
    main.cpp \
    launcher.cpp \

HEADERS += \
    launcher.h \

FORMS += \
    launcher.ui \

include($$PWD/icons/include.pri)
