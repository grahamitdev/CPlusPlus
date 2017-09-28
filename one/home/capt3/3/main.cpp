#include "point.h"

int main(void)
{
	Point p1();
	Point p2(2,3);
	Point p3 = p1 + p2;
	//p2++;
	p1.show_point();
	p2.show_point();
	p3.show_point();

	return 0;
}
