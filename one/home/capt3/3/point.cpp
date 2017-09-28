#include "point.h"

Point::Point(double x,double y)
	:x(x),y(y)
{

}
Point Point::operator+(const Point &p)
{
	double x = this -> x + p.x;
	double y = this -> y + p.y;
	Point point(x,y);
	return point;
}
/*
void Point::operator++(void)
{
	++this.x;
	++this.y;
}
*/
void Point::show_point(void)
{
	cout << "(" << x << "," << y << ")" << endl;
}
