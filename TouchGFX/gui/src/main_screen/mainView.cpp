#include <gui/main_screen/mainView.hpp>

mainView::mainView()
{

}

void mainView::setupScreen()
{
    mainViewBase::setupScreen();
}

void mainView::tearDownScreen()
{
    mainViewBase::tearDownScreen();
}

void mainView::UpdateGraph(uint16_t value)
{
	dynamicGraph1.addDataPoint(value);
}

void mainView::UpdateGraph2(uint16_t value)
{
	dynamicGraph2.addDataPoint(value);
}
