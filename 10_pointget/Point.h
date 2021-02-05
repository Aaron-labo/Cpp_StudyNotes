class Point;

class PointManagement
{
public:
	double getDistance(Point& a, Point& b);
};

class Point
{
public:
	Point(double xx, double yy);
	friend double PointManagement::getDistance(Point& a, Point& b);
private:
	double x, y;
};

