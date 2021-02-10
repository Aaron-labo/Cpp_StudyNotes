#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
public:
    Circle(int xx, int yy, int rr);
    virtual void show();
private:
    int r;
};

