#include "../includes/interface/Button.h"
#include "../includes/interface/Panel.h"

//~ @fn: testbench(void)
int testbench(void)
{
    //? @vars:
    Panel panel(Vector2f{1200, 800});
    Button exit{"Exit", 35};
    panel.add(&exit);
    RenderWindow window(DISPLAY, "RenderWindow - window");

    while (window.isOpen())
    {
        Vector2f mousePos = window.mapPixelToCoords(Mouse::getPosition(window));
        Event event;

        //& Event Polling
        while (window.pollEvent(event))
        {
            //? @note: Close Window
            if (event.type == event.Closed)
                window.close();

            //? @note: Keyboard Input Handler
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

            //? @note: Mouse Input Handler
            if (event.type == event.MouseButtonPressed)
            {
                switch (event.mouseButton.button)
                {
                case Mouse::Button::Left:
                    if (exit.contains(mousePos))
                    {
                        cout << "'exit' was pressed" << endl;
                        window.close();
                    }
                    break;

                default:
                    break;
                }
            }
            exit.hover(mousePos);
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