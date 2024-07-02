/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    button1.setXY(20, 171);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_START_BUTTON_VECTOR_ID), touchgfx::Bitmap(BITMAP_START_BUTTON_VECTOR_ID));
    button1.setAction(buttonCallback);
    add(button1);

    background.setXY(28, 113);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    add(background);

    textArea1.setXY(34, 125);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(235, 19, 19));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BJAD));
    add(textArea1);

    screen1point.setXY(133, 125);
    screen1point.setColor(touchgfx::Color::getColorFromRGB(230, 37, 37));
    screen1point.setLinespacing(0);
    Unicode::snprintf(screen1pointBuffer, SCREEN1POINT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_PAAG).getText());
    screen1point.setWildcard(screen1pointBuffer);
    screen1point.resizeToCurrentText();
    screen1point.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9WWM));
    add(screen1point);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1)
    {
        //Interaction1
        //When button1 clicked change screen to Screen2
        //Go to Screen2 with no screen transition
        application().gotoScreen2ScreenNoTransition();
    }
}