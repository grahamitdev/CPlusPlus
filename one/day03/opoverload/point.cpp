#include "point.h"

Point::Point(const double x,const double y)
	:x(x),y(y)
{

}
double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}


Point Point::operator+(const Point& p1)
{
	double x = this->x+p1.x;
	double y = this->y+p1.y;
	Point temp(x,y);
	return temp;
}
//前++
Point &Point::operator++(void)
{
	++(this -> x);
	++(this -> y);
	return *this;
}
//后++
Point &Point::operator++(int)
{
	++this -> x;
	++this -> y;	
	return *this;
}


void Point::show(void)
{
	cout << "(" << x << "," << y << ")" << endl;
}
