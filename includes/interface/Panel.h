#pragma once
#include "../master.h"

//~ @class: Panel
class Panel : public Drawable
{
private:
    //& Components
    RectangleShape mBackground;
    Vector2f mPosition;
    vector<pair<Drawable *, Vector2f>> mChildren;
    //? add a sprite in future

    //& Flags
    bool mVisible;

    //& Private Functions
    virtual void draw(RenderTarget &target, RenderStates states) const override
    {
        if (mVisible)
        {
            target.draw(mBackground);

            for (const auto &[drawable, offset] : mChildren)
            {
                target.draw(*drawable, states);
            }
        }
    }

public:
    //& Resources
    //////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: Constructor
    Panel(const Vector2f, const Vector2f, const Color);

    //* @public: Copy Constructor
    Panel(const Panel &);

    //* @public: Destructor
    ~Panel(void);
    //////////////////////////////////////////////////////////////////////////////////////////////////

    //& Public Functions
    //////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: add(const Drawable&

    //////////////////////////////////////////////////////////////////////////////////////////////////
};