#pragma once
#include "Employee.h"
class SalesMan :
    virtual public Employee
{
public:
    SalesMan();
    virtual void init();
    virtual void calcSalary();
    virtual void disInfo();
    virtual void promote();
protected:
    float monthSaleAmount;
    float rate;
};

