#include <gui/main_screen/mainView.hpp>
#include <gui/main_screen/mainPresenter.hpp>

mainPresenter::mainPresenter(mainView& v)
    : view(v)
{

}

void mainPresenter::activate()
{

}

void mainPresenter::deactivate()
{

}

void mainPresenter::UpdateGraph(uint16_t value)
{
	view.UpdateGraph(value);
}

void mainPresenter::UpdateGraph2(uint16_t value)
{
	view.UpdateGraph2(value);
}
