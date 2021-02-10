#pragma once
#include "SalesMan.h"
#include "Manager.h"

class SaleManager :
    public SalesMan, public Manager
{
public:
    SaleManager();
    virtual void init();
    virtual void calcSalary();
    virtual void disInfo();
    virtual void promote();
};

