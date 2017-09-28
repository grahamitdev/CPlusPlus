#include "pow.h"

int poww(int x,int y)
{
	if(y == 1)
	{
		return x;
	}
	return poww(x,y - 1) * x;
}
double poww(double x,int y)
{
	if(y == 1)
	{
		return x;
	}
	return poww(x,y - 1) * x;
}

Pow::Pow()
{

}
Pow::Pow(int x,int y)
	:x(x),y(y)
{
	result_double = poww(x,y);
}
Pow::Pow(double x,int y)
	:x(x),y(y)
{
	result_double = poww(x,y);
}

double Pow::getResult(void)
{
	return result_double;
}


