#include "../includes/interface/Button.h"

//~ @fn: testbench(void)
int testbench(void)
{
    //? note: view is very important for moving it across a subsection of a map

    View view;
    Button button{"Button", 38};

    //& RenderWindow
    RenderWindow window(DISPLAY, "RenderWindow - window");
    while (window.isOpen())
    {
        Vector2f mousePos = window.mapPixelToCoords(Mouse::getPosition(window));
        Event event;

        //& Event Polling
        while (window.pollEvent(event))
        {
            //! @note: window exit
            if (event.type == event.Closed)
                window.close();

            //* @note: keyboard input
            if (event.type == event.KeyPressed)
            {
                switch (event.key.code)
                {
                case Keyboard::Escape: //! @def: escape pressed -- exit window
                    window.close();
                default:
                    break;
                }
            }

            //* @note: mouse input
            if (event.type == event.MouseButtonPressed)
            {
                switch (event.mouseButton.button)
                {
                case Mouse::Button::Left: //? @def: left click
                    if (button.contains(mousePos))
                    {
                        // TODO - Add button functionality here
                    }
                    break;

                default:
                    break;
                }
            }

            button.hover(mousePos);
        }

        window.clear(Tan);
        window.draw(button);
        window.display();
    }
    return 0;
}

//~ @fn: main(void)
int main(void)
{
    return testbench();
}