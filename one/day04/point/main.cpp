#include "point.h"

/*
//重载全局的+号
Point operator+(Point& p1,Point& p2)
{
	double x = p1.getX()+p2.getX();
	double y = p1.getY()+p2.getY();
	Point temp(x,y);
	return temp;
}
*/

int main(void)
{
	Point p1(1.1,1.1);
	cout << p1.getX()<<","<< p1.getY() << endl;
	Point p2(2.2,2.2);
	Point p3 = p1 + p2;
	cout << p3.getX()<<","<< p3.getY() << endl;
	cout <<p3++<< endl;	
	cout <<p3<< endl;	
	return (0);
}
