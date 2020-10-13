#include <qcocoabaseview.h>
#include <QMacCocoaViewContainer>

#ifndef QCOCOABASEVIEW_P_H
#define QCOCOABASEVIEW_P_H

class QCocoaBaseViewPrivate : public QMacCocoaViewContainer
{
public:
    QCocoaBaseViewPrivate(QWidget *parent);
    virtual void initPrivateView();
};

#endif //QCOCOABASEVIEW_P_H
