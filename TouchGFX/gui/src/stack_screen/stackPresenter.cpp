#include <gui/stack_screen/stackView.hpp>
#include <gui/stack_screen/stackPresenter.hpp>

stackPresenter::stackPresenter(stackView& v)
    : view(v)
{

}

void stackPresenter::activate()
{

}

void stackPresenter::deactivate()
{

}

void stackPresenter::UpdateGraph(uint16_t value)
{
	view.UpdateGraph(value);
}

void stackPresenter::UpdateGraph2(uint16_t value)
{
	view.UpdateGraph2(value);
}
