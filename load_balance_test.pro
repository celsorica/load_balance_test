TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ../load_balance/server.cpp \
        ../load_balance/servermanagement.cpp \
        main.cpp \
        servermanagementtest.cpp \
        servertest.cpp

HEADERS += \
    ../load_balance/server.h \
    ../load_balance/servermanagement.h \
    servermanagementtest.h \
    servertest.h


DIR_GOOGLE_TEST=$$(HOME)/programas/googletest

unix:!macx: LIBS += -L$$DIR_GOOGLE_TEST/lib/ -lgtest
unix:!macx: LIBS += -L$$DIR_GOOGLE_TEST/lib/ -lgtest_main

INCLUDEPATH += $$DIR_GOOGLE_TEST/googletest/include

LIBS += -pthread


