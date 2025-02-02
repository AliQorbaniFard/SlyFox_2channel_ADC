/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/mainViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

mainViewBase::mainViewBase() :
    flexButtonCallback(this, &mainViewBase::flexButtonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(box1);

    dynamicGraph1.setPosition(0, 0, 240, 220);
    dynamicGraph1.setScale(1);
    dynamicGraph1.setGraphAreaMargin(0, 0, 0, 0);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(0, 3300);
    dynamicGraph1MajorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1MajorXAxisGrid.setInterval(10);
    dynamicGraph1MajorXAxisGrid.setLineWidth(1);
    dynamicGraph1MajorXAxisGrid.setAlpha(72);
    dynamicGraph1MajorXAxisGrid.setScale(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorXAxisGrid);

    dynamicGraph1MajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1MajorYAxisGrid.setInterval(330);
    dynamicGraph1MajorYAxisGrid.setLineWidth(1);
    dynamicGraph1MajorYAxisGrid.setAlpha(72);
    dynamicGraph1MajorYAxisGrid.setScale(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorYAxisGrid);

    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFromRGB(43, 202, 255));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);


    add(dynamicGraph1);

    dynamicGraph2.setPosition(240, 0, 240, 220);
    dynamicGraph2.setScale(1);
    dynamicGraph2.setGraphAreaMargin(0, 0, 0, 0);
    dynamicGraph2.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph2.setGraphRangeY(0, 3300);
    dynamicGraph2MajorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(252, 255, 92));
    dynamicGraph2MajorXAxisGrid.setInterval(10);
    dynamicGraph2MajorXAxisGrid.setLineWidth(1);
    dynamicGraph2MajorXAxisGrid.setAlpha(72);
    dynamicGraph2MajorXAxisGrid.setScale(1);
    dynamicGraph2.addGraphElement(dynamicGraph2MajorXAxisGrid);

    dynamicGraph2MajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(252, 255, 92));
    dynamicGraph2MajorYAxisGrid.setInterval(330);
    dynamicGraph2MajorYAxisGrid.setLineWidth(1);
    dynamicGraph2MajorYAxisGrid.setAlpha(72);
    dynamicGraph2MajorYAxisGrid.setScale(1);
    dynamicGraph2.addGraphElement(dynamicGraph2MajorYAxisGrid);

    dynamicGraph2Line1Painter.setColor(touchgfx::Color::getColorFromRGB(252, 255, 92));
    dynamicGraph2Line1.setPainter(dynamicGraph2Line1Painter);
    dynamicGraph2Line1.setLineWidth(2);
    dynamicGraph2.addGraphElement(dynamicGraph2Line1);

    add(dynamicGraph2);

    flexButton1.setBitmaps(Bitmap(BITMAP_BUTTON_LARGE_RELEASED_ID), Bitmap(BITMAP_BUTTON_LARGE_PRESSED_ID));
    flexButton1.setBitmapXY(0, 0);
    flexButton1.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_EDITOR_STACKED_LINE_CHART_50_50_E8F6FB_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_DONE_50_50_E8F6FB_SVG_ID));
    flexButton1.setIconXY(46, 0);
    flexButton1.setAction(flexButtonCallback);
    flexButton1.setPosition(168, 220, 145, 52);
    add(flexButton1);

    flexButton4.setBoxWithBorderPosition(0, 0, 240, 220);
    flexButton4.setBorderSize(5);
    flexButton4.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton4.setAlpha(0);
    flexButton4.setAction(flexButtonCallback);
    flexButton4.setPosition(0, 0, 240, 220);
    add(flexButton4);

    flexButton5.setBoxWithBorderPosition(0, 0, 240, 220);
    flexButton5.setBorderSize(5);
    flexButton5.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton5.setAlpha(0);
    flexButton5.setAction(flexButtonCallback);
    flexButton5.setPosition(240, 0, 240, 220);
    add(flexButton5);
}

mainViewBase::~mainViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void mainViewBase::setupScreen()
{

}

void mainViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to stack
        //Go to stack with screen transition towards East
        application().gotostackScreenSlideTransitionEast();
    }
    if (&src == &flexButton4)
    {
        //Interaction2
        //When flexButton4 clicked change screen to channel1
        //Go to channel1 with screen transition towards East
        application().gotochannel1ScreenSlideTransitionEast();
    }
    if (&src == &flexButton5)
    {
        //Interaction3
        //When flexButton5 clicked change screen to channel2
        //Go to channel2 with screen transition towards East
        application().gotochannel2ScreenSlideTransitionEast();
    }
}
