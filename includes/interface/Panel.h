#include "../master.h"

//~ @class: Panel
class Panel : public Drawable
{
private:
    //& Components
    RectangleShape mBackground;
    Vector2f mPosition;
    vector<Drawable *> mChildren;
    //? add a sprite in future

    //& Flags
    bool mVisible;

    //& Private Functions
    virtual void draw(RenderTarget &target, RenderStates states) const override
    {
        if (mVisible)
        {
            target.draw(mBackground);
        }
    }

public:
    //& Resources
    //////////////////////////////////////////////////////////////////////////////////////////////////
    //* @public: Constructor
    Panel(void);

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