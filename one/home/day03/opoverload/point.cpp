#include "point.h"

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

Point::Point(const double x,const double y)
	:x(x),y(y)
{

}
/*
Point Point::operator+(const Point& p1)
{
	double x = this->x+p1.x;
	double y = this->y+p1.y;
	Point temp(x,y);
	return temp;
}
*/

Point operator+(const Point& p1,const Point& p2)
{
	double x = p1.x+p2.x;
	double y = p1.y+p2.y;
	Point temp(x,y);
	return temp;

}
