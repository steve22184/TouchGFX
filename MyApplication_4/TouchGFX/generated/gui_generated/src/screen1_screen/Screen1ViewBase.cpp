/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{

    background.setPosition(0, 0, 800, 480);
    background.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    button.setXY(328, 382);
    button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    button.setAction(buttonCallback);

    add(background);
    add(button);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::setBackgroundColor(colortype value)
{
    //Interaction1
    //When setBackgroundColor is called execute C++ code
    //Execute C++ code
    background.setColor(value);
    background.invalidate();
}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button)
    {
        //Interaction2
        //When button clicked call setBackgroundColor on Screen1
        //Call setBackgroundColor
        setBackgroundColor(touchgfx::Color::getColorFrom24BitRGB(rand()%256, rand()%256, rand()%256));
    }
}
