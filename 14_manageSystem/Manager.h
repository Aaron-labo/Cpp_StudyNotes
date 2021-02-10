#pragma once
#include "Employee.h"
class Manager :
    virtual public Employee
{
public:
    Manager();
    virtual void init();
    void addSalary(int addAmount);
    virtual void calcSalary();
    virtual void disInfo();
    virtual void promote();
protected:
    float staticSalary;
};

