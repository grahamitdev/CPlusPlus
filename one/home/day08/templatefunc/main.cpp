#include <iostream>
#include <cmath>
using namespace std;

template<typename T> 
T func(T x,T y);

class Point
{
private:
	double x;
	double y;
public:
	Point(const double& x,const double& y)
		:x(x),y(y){}
	friend ostream& operator<<(ostream& out,const Point& p)
	{
		out << p.x << "," << p.y << endl;
		return out;
	}
	Point operator+(const Point& p)
	{
		this->x += p.x;
		this->y += p.y;
		return *this;
	}
};
template<>
double func<double>(double x,double y)
{
	return x-y;
}

int main(void)
{
	Point p1(1.1,1.1);
	Point p2(1.2,1.2);
	cout << func(2,2) << endl;
	cout << func(1.2,1.2)<< endl;
	cout << func(p1,p2) << endl;
	return 0;
}

template<typename T>
T func(T x,T y)
{
	return x+y;
}


