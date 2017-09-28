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

Point& Point::operator++()
{
	++this->x;
	++this->y;
	return *this;
}

Point Point::operator++(int)
{
	Point temp(this->x,this->y);
	++this->x;
	++this->y;
	return temp;
}

	
ostream& operator<<(ostream& out ,const Point& point)
{
	out << point.x <<","<<point.y;
	return out;
}

