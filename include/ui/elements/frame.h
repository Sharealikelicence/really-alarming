#ifndef UI_FRAME_H
#define UI_FRAME_H

#include "container.h"

class Frame: public Container
{
private:
    /* data */
public:
    Frame();
    ~Frame();
    void show();
};

Frame::Frame()
{
}

Frame::~Frame()
{
}

#endif
