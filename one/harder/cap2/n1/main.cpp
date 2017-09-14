#include <iostream>
using namespace std;

class Point{
private:
	int x;
	int y;
public:
	Point(const int x,const int y)const;
	void set_x(const int x)const;
	void set_y(const int y)const;
	const int get_x(void)const;
	const int get_y(void)const;
}

Point::Point(const int x,const int y)
{
	this -> x = x;
	this -> y = y;
	cout << "构造函数被调用" << endl;
}
void Point::set_x(const int x)const
{
	this -> x = x;
}
void Point::set_y(const int y)const
{
	this -> y = y;
}
const int get_x(void)const
{
	return this -> x;
}
const int get_y(void)const
{
	return this -> y;
}

int main(void)
{
	Point point(2,3);
	cout << point.get_x() << endl;
	cout << point.get_y() << endl;

	return 0;
}
