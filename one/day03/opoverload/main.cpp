#include "point.h"

int main(void)
{
	Point p1(1,1);
	Point p2(2,3);
	Point p3 = p1 + p2;
	p3.show();
	++p3;
	p3.show();
	p3++;
	p3.show();
	
	return (0);
}
