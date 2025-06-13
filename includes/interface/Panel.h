#include "Textbox.h"
#pragma once

//~ @class: Panel
//? @note: add some sort of out of bounds detection,
class Panel : public Drawable
{
private:
    //& Components
    RectangleShape mBackground;
    vector<pair<Drawable *, Vector2f>> mChildren;

    //& Flags
    bool mVisible;

public:
    //& Resources
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: Constructor
    Panel(const Vector2f = {500, 500}, const Vector2f = {DISPLAY.width / 2.f, DISPLAY.height / 2.f}, const Color = DarkRed);

    //* @public: Destructor
    ~Panel(void);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //& Functions
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: draw(RenderTarget&, RenderStates)
    virtual void draw(RenderTarget &target, RenderStates states) const override
    {
        if (mVisible)
        {
            target.draw(mBackground);

            for (auto &[drawable, offset] : mChildren)
            {
                states.transform.translate(offset);
                target.draw(*drawable, states);
            }
        }
    }

    //* @public: move(const Vector2f)
    void move(const Vector2f);

    //* @public: resize(const Vector2f)
    void resize(const Vector2f);

    //* @public: add(Drawable*, Vector2f)
    void add(Drawable *, Vector2f = {0, 0});

    //* @public: visible(const bool)
    void visible(const bool);

    //* @public: isVisible(void)
    const bool isVisible(void) const;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //& Mutators
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: setColor(const Color)
    void setColor(const Color);

    //* @public: setOutlineColor(const Color)
    void setOutlineColor(const Color);

    //* @public: setOutlineThickness(const float)
    void setOutlineThickness(const float);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //& Accessors
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: getColor(void)
    const Color getColor(void) const;

    //* @public: getOutlineColor(void)
    const Color getOutlineColor(void) const;

    //* @public: getOutlineThickness(void)
    const float getOutlineThickness(void) const;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
};