#pragma once
#include "Shape.h"
class Rect :
    public Shape
{
public:
    Rect(int xx, int yy, int ww, int hh);
    virtual void show();
private:
    int w;
    int h;
};

