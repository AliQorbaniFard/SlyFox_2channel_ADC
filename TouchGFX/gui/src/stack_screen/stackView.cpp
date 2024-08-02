#include <gui/stack_screen/stackView.hpp>

stackView::stackView()
{

}

void stackView::setupScreen()
{
    stackViewBase::setupScreen();
}

void stackView::tearDownScreen()
{
    stackViewBase::tearDownScreen();
}

void stackView::UpdateGraph(uint16_t value)
{
	dynamicGraph1.addDataPoint(value);
}

void stackView::UpdateGraph2(uint16_t value)
{
	dynamicGraph2.addDataPoint(value);
}
