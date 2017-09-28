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
	Point(const double x = 0,const double y = 0);
	double getX();
	double getY();
	Point operator+(const Point& p1);
	Point &operator++(void);//前++
	Point &operator++(int);//后++
	void  show(void);
};
#endif
