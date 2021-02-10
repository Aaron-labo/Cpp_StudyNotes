#pragma once
#include <iostream>
using namespace std;

class Shape
{
public:
	Shape(int xx, int yy);
	virtual void show();
private:
	int x;
	int y;
};

