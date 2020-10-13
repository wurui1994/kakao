#ifndef QCOCOASCROLLVIEW_H
#define QCOCOASCROLLVIEW_H

#include <AppKit/AppKit.h>
#include "qcocoabaseview.h"

class QCocoaScrollviewPrivate;
class QCocoaScrollview : public QCocoaBaseView
{
public:
    QCocoaScrollview(QWidget *parent);
    NSScrollView *scrollView();
};

#endif // QCOCOASCROLLVIEW_H
