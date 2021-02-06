#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double xx, double yy)
	:x(xx), y(yy) {}

void Complex::dis()
{
	cout << '(' << x << ',' << y << ')' << endl;
}

Complex& Complex::operator+=(const Complex& another)
{
	this->x += another.x;
	this->y += another.y;
	return *this;
}

ostream& operator<<(ostream &os, const Complex& c)
{
	return os << '(' << c.x <<  ',' << c.y << ')';
}

istream& operator>>(istream& is,Complex& c)
{
	return is >> c.x >> c.y;
}
