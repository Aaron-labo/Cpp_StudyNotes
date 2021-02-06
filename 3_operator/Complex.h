#pragma once
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex(double xx = NULL, double yy = NULL);
	void dis();
	Complex& operator+=(const Complex& another);
	friend ostream& operator<<(ostream& os, const Complex& c);
	friend istream& operator>>(istream& is, Complex& c);
private:
	double x;
	double y;
};

ostream& operator<<(ostream& os, const Complex& c);
istream& operator>>(ostream& is, const Complex& c);
