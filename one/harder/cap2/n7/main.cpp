#include <iostream>
using namespace std;

class Point{
private:
	int x;
	int y;
public:
	int getX(void);
	int getY(void);
	void setX(int x);
	void setY(int y);
	Point();
	Point(int x,int y);
};

int Point::getX(void)
{
	return this -> x;
}
int Point::getY(void)
{
	return this -> y;
}


void Point::setX(int x)
{
	this -> x = x;
}
void Point::setY(int y)
{
	this -> y= y;
}
Point::Point()
{

}
Point::Point(int x,int y)
	:x(x),y(y)
{

}
int main(void)
{
	Point point(2,3);
	cout << point.getX() << endl;
	cout << point.getY() << endl;

	return 0;
}
