#ifndef QCOCOAVIEWBASE_H
#define QCOCOAVIEWBASE_H

#include <QtWidgets>
#include <AppKit/AppKit.h>

class QCocoaBaseViewPrivate;
class QCocoaBaseView : public QWidget
{
public:
    QCocoaBaseView(QWidget *parent);

    NSView *cocoaView();

    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    void resizeEvent(QResizeEvent * event);
    void setSize(QSize size);

protected:
    void setViewPrivate(QCocoaBaseViewPrivate *priv);
    QCocoaBaseViewPrivate *d;
};

#endif // QCOCOAVIEWBASE_H
