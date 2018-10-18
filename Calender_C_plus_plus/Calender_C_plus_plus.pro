TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    contacts.cpp \
    date.cpp

HEADERS += \
    coordinator.h \
    configurationManeger.h \
    calendar.h \
    Date.h \
    Meeting.h \
    Room.h \
    Contact.h
