#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(double xx, double yy)
{
	x = xx;
	y = yy;
}

double PointManagement::getDistance(Point& a, Point& b)
{
	double dx = a.x - b.x;
	double dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy);
}