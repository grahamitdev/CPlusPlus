#include <iostream>
using namespace std;

class Point{
private:
	double x;
	double y;
public:
	double getX(void);
	double getY(void);
	void setX(double x);
	void setY(double y);
	Point();
	Point(double x,double y);
};

double Point::getX(void)
{
	return this -> x;
}
double Point::getY(void)
{
	return this -> y;
}


void Point::setX(double x)
{
	this -> x = x;
}
void Point::setY(double y)
{
	this -> y= y;
}
Point::Point()
{

}
Point::Point(double x,double y)
	:x(x),y(y)
{

}


class Square{
private:
	Point center;
	double width;
public:
	Point getLeftTopPoint(void);
	Point getLeftButtonPoint(void);
	Point getRightTopPoint(void);
	Point getRightButtonPoint(void);
	Square(Point center,int width);
};

Point Square::getLeftTopPoint(void)
{
	Point point(center.getX(),center.getY());
	return point;
}
Point Square::getLeftButtonPoint(void)
{
	Point point(center.getX(),center.getY() - width);
	return point;
}
Point Square::getRightTopPoint(void)
{
	Point point(center.getX() + width,center.getY());
	return point;
}
Point Square::getRightButtonPoint(void)
{
	Point point(center.getX() + width,center.getY() - width);
	return point;
}
Square::Square(Point center,int width)
{
	this -> center = center;
	this -> width = width;
}






int main(void)
{
	Point point(2,3);
	cout << point.getX() << endl;
	cout << point.getY() << endl;
	Square square(point,5);
	cout << "LeftTopPoint：" << square.getLeftTopPoint().getX() << "," << square.getLeftTopPoint().getY() << endl;
	cout << "LeftButtonPoint："  << square.getLeftButtonPoint().getX() << "," << square.getLeftButtonPoint().getY() << endl;
	cout << "RightTopPoint：" << square.getRightTopPoint().getX() << "," << square.getRightTopPoint().getY() << endl;
	cout << "RightButtonPoint：" << square.getRightButtonPoint().getX() << "," << square.getRightButtonPoint().getY() << endl;


	return 0;
}
