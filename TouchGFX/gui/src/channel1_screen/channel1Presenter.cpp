#include <gui/channel1_screen/channel1View.hpp>
#include <gui/channel1_screen/channel1Presenter.hpp>

channel1Presenter::channel1Presenter(channel1View& v)
    : view(v)
{

}

void channel1Presenter::activate()
{

}

void channel1Presenter::deactivate()
{

}

void channel1Presenter::UpdateGraph(uint16_t value)
{
	view.UpdateGraph(value);
}


