DEPENDPATH += $$PWD
INCLUDEPATH += $$PWD/
HEADERS += $$PWD/qcocoatableview.h \
    $$PWD/qcocoatextedit.h \
    $$PWD/qcocoascrollview.h \
    $$PWD/qcocoascrollview_p.h \
    $$PWD/qcocoabaseview.h \
    $$PWD/qcocoabaseview_p.h \
    $$PWD/qcocoatoolbar.h \
    $$PWD/qcocoautil.h \
    $$PWD/qcocoatreeview.h \
    $$PWD/qcocoaitemview_p.h
SOURCES += $$PWD/qcocoatableview.mm \
    $$PWD/qcocoatextedit.mm \
    $$PWD/qcocoautil.mm \
    $$PWD/qcocoascrollview.mm \
    $$PWD/qcocoabaseview.mm \
    $$PWD/qcocoatoolbar.mm \
    $$PWD/qcocoatreeview.mm \
    $$PWD/qcocoaitemview.mm
LIBS += -framework AppKit
