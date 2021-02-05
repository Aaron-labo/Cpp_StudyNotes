#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point a(1, 2), b(3, 4);
	PointManagement pm;
	double dis = pm.getDistance(a, b);
	cout << dis << endl;
}