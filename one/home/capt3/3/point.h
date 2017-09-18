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
	Point(double x = 0,double y= 0);
	Point operator+(const Point &p);
	//void operator++(void);
	void show_point(void);
};

#endif
