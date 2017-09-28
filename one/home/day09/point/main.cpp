#include "point.h"


int main(void)
{
	Point<int,int> p1(1,2);
	Point<string,string> p2("东经45度","北纬60度");
	Point<int,string> p3(20,"北纬50度");
	cout << p3.getX() << endl;
	cout << p3.getY() << endl;
	return 0;
}
