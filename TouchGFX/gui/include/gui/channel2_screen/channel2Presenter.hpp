#ifndef CHANNEL2PRESENTER_HPP
#define CHANNEL2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class channel2View;

class channel2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    channel2Presenter(channel2View& v);

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

    virtual ~channel2Presenter() {}

     void UpdateGraph2(uint16_t value);

private:
    channel2Presenter();

    channel2View& view;
};

#endif // CHANNEL2PRESENTER_HPP
