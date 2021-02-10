#include "Circle.h"

Circle::Circle(int xx, int yy, int rr)
	:Shape(xx, yy), r(rr)
{
}

void Circle::show()
{
	cout << "this is circle" << endl;
}
