#pragma once
#include "Fornitual.h"
class Sofa :
    virtual public Fornitual
{
public:
    Sofa(float l, float w, float h);
    void sit();
};

