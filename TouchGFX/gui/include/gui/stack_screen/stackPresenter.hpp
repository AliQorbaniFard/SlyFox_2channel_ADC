#ifndef STACKPRESENTER_HPP
#define STACKPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class stackView;

class stackPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    stackPresenter(stackView& v);

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

    virtual ~stackPresenter() {}
    void UpdateGraph(uint16_t value);
    void UpdateGraph2(uint16_t value);

private:
    stackPresenter();

    stackView& view;
};

#endif // STACKPRESENTER_HPP
