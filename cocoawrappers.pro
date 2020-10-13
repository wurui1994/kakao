include (src/cocoawrappers.pri)

TEMPLATE = app
TARGET = kakao
DEPENDPATH += .
INCLUDEPATH += .

QT += widgets macextras

# Input
HEADERS += model.h
SOURCES += model.cpp \
    main.mm

LIBS += -framework AppKit
