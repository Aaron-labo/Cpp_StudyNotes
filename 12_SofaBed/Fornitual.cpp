#include "Fornitual.h"

Fornitual::Fornitual(float l, float w, float h)
	:len(l), width(w), height(h)
{
}

void Fornitual::dis()
{
	cout << "len:" << len << endl;
	cout << "width:" << width << endl;
	cout << "height:" << height << endl;
}
