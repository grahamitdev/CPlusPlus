#include <iostream>
#include <string>
using namespace std;

template <class T1,class T2>
class Point
{
private:
	T1 x;
	T2 y;
protected:
public:
	Point();
	Point(T1 x,T2 y)
		:x(x),y(y)
	{

	}
	T1 getX(void);
	T2 getY(void);
};

template <typename T1,typename T2>
T1 Point<T1,T2>::getX(void)
{
	return x;
}	
template <typename T1,typename T2>
T2 Point<T1,T2>::getY(void)
{
	return y;
}


int main(void)
{
	Point<int,int> point1(1,1);
	cout << point1.getX() <<"," << point1.getY()<< endl;
	Point<int,double> point2(2,2.3);
	cout << point2.getX() <<"," << point2.getY()<< endl;
	return 0;
}









