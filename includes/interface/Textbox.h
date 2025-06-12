#include "../master.h"
#pragma once

//~ @class: Textbox
class Textbox : public Drawable
{
private:
    //& Components
    RectangleShape mRectangle;
    Font mFont;
    Text mText;

    //& Flags
    bool mVisible;

public:
    //& Resources
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: Constructor
    Textbox(const String = "Sample Text", const unsigned int = 30, const String = SixtyFourConvergence);

    //* @public: Copy Constructor
    Textbox(const Textbox &);

    //* @public: Destructor
    ~Textbox(void);
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //& Functions
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: draw(RenderTarget&, RenderStates)
    virtual void draw(RenderTarget &target, RenderStates states) const override
    {
        if (mVisible == true)
        {
            target.draw(mRectangle, states);
            target.draw(mText, states);
        }
    }

    //* @public: move(const Vector2f)
    void move(const Vector2f);

    //* @public: resize(const unsigned int)
    void resize(const unsigned int);

    //* @public: contains(const Vector2f)
    bool contains(const Vector2f);

    //* @public: visible(const bool)
    void visible(const bool);

    //* @public: isVisible(void)
    bool isVisible(void);
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //& Mutators
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: setText(const String)
    void setText(const String);

    //* @public: setPosition(const Vector2f)
    void setPosition(const Vector2f);

    //* @public: setColor(const Color)
    void setColor(const Color);

    //* @public: setOutlineColor(const Color)
    void setOutlineColor(const Color);

    //* @public: setOutlineThickness(const float)
    void setOutlineThickness(const float);

    //* @public: setTextColor(const Color)
    void setTextColor(const Color);

    //* @public: setTextOutlineColor(const Color)
    void setTextOutlineColor(const Color);

    //* @public: setTextOutlineThickness(const float)
    void setTextOutlineThickness(const float);
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //& Accessors
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: getText(void)
    const String getText(void) const;

    //* @public: getPosition(void)
    const Vector2f getPosition(void) const;

    //* @public: getColor(void)
    const Color getColor(void) const;

    //* @public: getOutlineColor(void)
    const Color getOutlineColor(void) const;

    //* @public: getOutlineThickness(void)
    const float getOutlineThickness(void) const;

    //* @public: getTextColor(void)
    const Color getTextColor(void) const;

    //* @public: getTextOutlineColor(void)
    const Color getTextOutlineColor(void) const;

    //* @public: getTextOutlineThickness(void)
    const float getTextOutlineThickness(void) const;

    //* @public: getGlobalBounds(void)
    const FloatRect getGlobalBounds(void) const;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
};
