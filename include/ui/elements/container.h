#ifndef UI_CONTAINER_H
#define UI_CONTAINER_H

#include "element.h"

class Container: public Element
{
private:
    /* data */
public:
    virtual void add(Element e) = 0;
};

#endif