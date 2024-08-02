#include <gui/channel2_screen/channel2View.hpp>
#include <gui/channel2_screen/channel2Presenter.hpp>

channel2Presenter::channel2Presenter(channel2View& v)
    : view(v)
{

}

void channel2Presenter::activate()
{

}

void channel2Presenter::deactivate()
{

}



void channel2Presenter::UpdateGraph2(uint16_t value)
{
	view.UpdateGraph2(value);
}
