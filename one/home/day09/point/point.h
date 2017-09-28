#ifndef _POINT_H
#define _POINT_H

#include <iostream>
#include <string>
using namespace std;


template <typename T1,typename T2>
class Point
{
private:
	T1 x;
	T2 y;
public:
	Point(const T1& x,const T2& y);
	void setX(const T1& x);
	void setY(const T2& y);
	const T1& getX()const;
	const T2& getY()const;
};

template<typename T1,typename T2>
Point<T1,T2>::Point(const T1& x,const T2& y)
		:x(x),y(y)
{
}

template<typename T1,typename T2>
void Point<T1,T2>::setX(const T1& x)
{
	this->x = x;
}

template<typename T1,typename T2>
void Point<T1,T2>::setY(const T2& y)
{
	this->y = y;
}

template<typename T1,typename T2>
const T1& Point<T1,T2>::getX()const
{
	return x;
}

template<typename T1,typename T2>
const T2& Point<T1,T2>::getY()const
{
	return y;
}

#endif
