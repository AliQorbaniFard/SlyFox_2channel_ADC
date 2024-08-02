/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <gui/main_screen/mainView.hpp>
#include <gui/main_screen/mainPresenter.hpp>
#include <gui/stack_screen/stackView.hpp>
#include <gui/stack_screen/stackPresenter.hpp>
#include <gui/channel1_screen/channel1View.hpp>
#include <gui/channel1_screen/channel1Presenter.hpp>
#include <gui/channel2_screen/channel2View.hpp>
#include <gui/channel2_screen/channel2Presenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableDecompressorL8_All();
}

/*
 * Screen Transition Declarations
 */

// main

void FrontendApplicationBase::gotomainScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotomainScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotomainScreenNoTransitionImpl()
{
    touchgfx::makeTransition<mainView, mainPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotomainScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotomainScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotomainScreenSlideTransitionWestImpl()
{
    touchgfx::makeTransition<mainView, mainPresenter, touchgfx::SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// stack

void FrontendApplicationBase::gotostackScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotostackScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotostackScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<stackView, stackPresenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// channel1

void FrontendApplicationBase::gotochannel1ScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotochannel1ScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotochannel1ScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<channel1View, channel1Presenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// channel2

void FrontendApplicationBase::gotochannel2ScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotochannel2ScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotochannel2ScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<channel2View, channel2Presenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
