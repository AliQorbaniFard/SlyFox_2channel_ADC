#ifndef CHANNEL1PRESENTER_HPP
#define CHANNEL1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class channel1View;

class channel1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    channel1Presenter(channel1View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~channel1Presenter() {}

    void UpdateGraph(uint16_t value);

private:
    channel1Presenter();

    channel1View& view;
};

#endif // CHANNEL1PRESENTER_HPP
