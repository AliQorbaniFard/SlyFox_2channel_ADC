#ifndef CHANNEL1VIEW_HPP
#define CHANNEL1VIEW_HPP

#include <gui_generated/channel1_screen/channel1ViewBase.hpp>
#include <gui/channel1_screen/channel1Presenter.hpp>

class channel1View : public channel1ViewBase
{
public:
    channel1View();
    virtual ~channel1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void UpdateGraph(uint16_t value);


protected:
};

#endif // CHANNEL1VIEW_HPP
