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

Complex& Complex::operator++()
{
	x++;
	y++;
	return *this;
}

const Complex& Complex::operator++(int)
{
	Complex t(this->x, this->y);
	(this->x)++;
	(this->y)++;
	return t;
}


ostream& operator<<(ostream &os, const Complex& c)
{
	return os << '(' << c.x <<  ',' << c.y << ')';
}

istream& operator>>(istream& is,Complex& c)
{
	return is >> c.x >> c.y;
}
