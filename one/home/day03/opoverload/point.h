#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
using namespace std;


class Point
{
private:
	double x;
	double y;
public:
	Point(const double x,const double y);
	double getX();
	double getY();
//	Point operator+(const Point& p1);
	friend Point operator+(const Point& p1,const Point& p2);
};
#endif
