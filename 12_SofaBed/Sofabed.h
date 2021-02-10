#pragma once
#include "Sofa.h"
#include "Bed.h"
class Sofabed :
    public Sofa, public Bed
{
public:
    Sofabed(float l, float w, float h);
};

