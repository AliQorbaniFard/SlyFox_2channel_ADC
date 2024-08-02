#include <gui/channel1_screen/channel1View.hpp>

channel1View::channel1View()
{

}

void channel1View::setupScreen()
{
    channel1ViewBase::setupScreen();
}

void channel1View::tearDownScreen()
{
    channel1ViewBase::tearDownScreen();
}

void channel1View::UpdateGraph(uint16_t value)
{
	dynamicGraph1.addDataPoint(value);
}


