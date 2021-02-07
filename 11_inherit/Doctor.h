#pragma once
#include "Graduate.h"
class Doctor :
    public Graduate
{
public:
    Doctor(string nn, int aa, int ss, int ds, string tt);
    void dump();
private:
    string title;
};

