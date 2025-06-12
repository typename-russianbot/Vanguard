#include "../includes/interface/Button.h"
#include "../includes/interface/Panel.h"

//~ @fn: testbench(void)
int testbench(void)
{

    //! Testing Block - @vars
    View view;
    Panel panel(Vector2f{1200, 800});
    Button button{"Button", 35};
    panel.add(&button);

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
                //! @note: window exit
                case Keyboard::Escape:
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
        window.draw(panel);
        window.display();
    }
    return 0;
}

//~ @fn: main(void)
int main(void)
{
    return testbench();
}