#pragma once
#include "Fornitual.h"
class Bed :
    virtual public Fornitual
{
public:
    Bed(float l, float w, float h);
    void sleep();
};

