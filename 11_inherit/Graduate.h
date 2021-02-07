#pragma once
#include "Student.h"
class Graduate :
    public Student
{
public:
    Graduate(string nn, int aa, float ss, double ds);
    void print();
private:
    double salary;
};

