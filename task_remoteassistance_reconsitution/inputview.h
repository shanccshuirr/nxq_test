#ifndef INPUTVIEW_H
#define INPUTVIEW_H

#include <QWidget>
#include "widgetbase.h"
class InputView : public WidgetBase
{
public:
    InputView();
    virtual QWidget* createDWidget() override;
    virtual QWidget* createDPushButton() ;

    DSuggestButton* m_canclPushBut = nullptr;
    DSuggestButton* m_returnPushBut = nullptr;
};

#endif // INPUTVIEW_H
