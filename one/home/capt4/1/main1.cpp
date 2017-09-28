#include <iostream>
#include <string>
using namespace std;
//点类
class Point
{
private:
	double x;
	double y;
protected:
public:
	inline Point();
	inline Point(const double &x,const double &y);
	inline void set_x(const double &x);
	inline void set_y(const double &y);
	inline double get_x(void)const;
	inline double get_y(void)const;
	inline Point &operator=(const Point &p);
	inline friend ostream &operator<<(ostream &output,const Point &p);
};
//图形类
class Figure
{
private:
protected:
public:
	virtual void onDraw() = 0;
	virtual ~Figure(){}//基类虚析构
};
//三角形类
class Triangle:public Figure
{
private:
	Point a;
	Point b;
	Point c;
protected:
public:
	inline Triangle();
	inline Triangle(const Point &a,const Point &b,const Point &c);
	inline virtual void onDraw();
};
//圆形类
class Round:public Figure
{
private:
	Point o;
	double r;
protected:
public:
	inline Round();
	inline Round(const Point &o,const double &r);
	inline virtual void onDraw();		
};
//画家类
class Painter
{
private:
protected:
public:
	inline void draw(Figure *f);
};

Point::Point()
{

}
Point::Point(const double &x,const double &y)
	:x(x),y(y)
{

}
void Point::set_x(const double &x)
{
	this -> x = x;
}		
void Point::set_y(const double &y)
{
	this -> y = y;
}
double Point::get_x(void)const
{
	return this -> x;
}
double Point::get_y(void)const
{
	return this -> y;
}
Point &Point::operator=(const Point &p)
{
	this -> x = p.x;
	this -> y = p.y;
	return *this;
}
ostream &operator<<(ostream &output,const Point &p)
{
	output<< "(" << p.x << "," << p.y << ")";
	return output;
}
Triangle::Triangle()
{

}
Triangle::Triangle(const Point &a,const Point &b,const Point &c)
	:Figure(),a(a),b(b),c(c)
{

}
void Triangle::onDraw()
{
	cout << "画出一个三角形" << endl;;
	cout << "各点坐标:" << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
Round::Round()
{

}
Round::Round(const Point &o,const double &r)
	:Figure(),o(o),r(r)
{
	
}
void Round::onDraw()
{
	cout << "画出一个圆形" << endl;
	cout << "圆心:" << o << endl;
	cout << "半径:" << r << endl;
}
void Painter::draw(Figure *f)
{
	cout << "=========================" << endl;
	cout << "画家开始画画..." << endl;
	f -> onDraw();
	cout << "画好了!" << endl;
	cout << "=========================" << endl;
}

int main(void)
{
	Point a = Point(0,0);
	Point b = Point(0,3);
	Point c = Point(4,0);
	Point o = Point(0,0);


	double r = 2.00;
	Triangle *triangle = new Triangle(a,b,c);
	Round *round = new Round(o,r);
	Painter painter = Painter();
	painter.draw(triangle);
	painter.draw(round);

	delete triangle;
	triangle = NULL;
	delete round;
	round = NULL;
	return 0;
}

