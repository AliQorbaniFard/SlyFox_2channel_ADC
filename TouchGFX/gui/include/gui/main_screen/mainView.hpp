#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/mainViewBase.hpp>
#include <gui/main_screen/mainPresenter.hpp>

class mainView : public mainViewBase
{
public:
    mainView();
    virtual ~mainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void UpdateGraph(uint16_t value);
    void UpdateGraph2(uint16_t value);

protected:
};

#endif // MAINVIEW_HPP
