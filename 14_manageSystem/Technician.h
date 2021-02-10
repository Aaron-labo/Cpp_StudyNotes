#pragma once
#include "Employee.h"

class Technician :
    public Employee
{
public:
    Technician();
    virtual void init();
    virtual void calcSalary();
    virtual void disInfo();
    virtual void promote();
private:
    int hourAount;
    float moneyPerhour;
};

