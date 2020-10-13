#include <QtWidgets>
#include "qcocoascrollview.h"

#include <AppKit/AppKit.h>
class QCocoaTextEdit : public QCocoaScrollview
{
public:
    QCocoaTextEdit(QWidget *parent = 0);

    NSTextView *textView() const;

    void setPlainText(const QString &text);
    QString plainText();

    void setHtml(const QString &html);
    QString html();
};
