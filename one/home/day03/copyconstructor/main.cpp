#include "car.h"

Car func(Car car)
{
	return car;
}

int main(void)
{
	Car *car = new Car();
	car->introduce();
	//会调用拷贝构造函数，如果没有自定义的拷贝构造函数，就会使用系统默认的拷贝构造函数，否则使用自定义的拷贝构造函数
	Car *car1 = car;
	car1->introduce();
	cout << "========"<< endl;
	func(*car1).introduce();
	delete car;
	return 0;
}
