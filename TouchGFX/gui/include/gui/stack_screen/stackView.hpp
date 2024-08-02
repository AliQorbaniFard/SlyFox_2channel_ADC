#ifndef STACKVIEW_HPP
#define STACKVIEW_HPP

#include <gui_generated/stack_screen/stackViewBase.hpp>
#include <gui/stack_screen/stackPresenter.hpp>

class stackView : public stackViewBase
{
public:
    stackView();
    virtual ~stackView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void UpdateGraph(uint16_t value);
    void UpdateGraph2(uint16_t value);
protected:
};

#endif // STACKVIEW_HPP
