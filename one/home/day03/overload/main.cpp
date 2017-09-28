#include <iostream>
#include <cmath>
using namespace std;

int func(int x,int y)
{
	return pow(x,y);
}

float func(float x,int y)
{
	return pow(x,y);
}


int main(void)
{
	cout << func(2,2) << endl;
	cout << func(1.2f,2)<< endl;

	return 0;
}
