#include <gui/channel2_screen/channel2View.hpp>

channel2View::channel2View()
{

}

void channel2View::setupScreen()
{
    channel2ViewBase::setupScreen();
}

void channel2View::tearDownScreen()
{
    channel2ViewBase::tearDownScreen();
}

void channel2View::UpdateGraph2(uint16_t value)
{
	dynamicGraph2.addDataPoint(value);
}
