#ifndef CHANNEL2VIEW_HPP
#define CHANNEL2VIEW_HPP

#include <gui_generated/channel2_screen/channel2ViewBase.hpp>
#include <gui/channel2_screen/channel2Presenter.hpp>

class channel2View : public channel2ViewBase
{
public:
    channel2View();
    virtual ~channel2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void UpdateGraph2(uint16_t value);

protected:
};

#endif // CHANNEL2VIEW_HPP
