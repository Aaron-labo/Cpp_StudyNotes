#include<iostream>
using namespace std;

struct Complex
{
	float real;
	float image;
};

Complex operator+ (Complex a, Complex b)
{
	Complex c;
	c.real = a.real + b.real;
	c.image = a.image + b.image;
	return c;
}

int main()
{
	Complex a = { 1, 2 }, b = { 3, 4 };
	Complex c = a + b;
	cout << "c = " << c.real << " + i" << c.image << endl;

	return 0;
}