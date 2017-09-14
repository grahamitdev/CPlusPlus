#include "car.h"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
#if 1
Car::Car()//还原系统默认构造函数//覆盖系统默认构造函数
	brand("\0");weight(0);wheel(0)//都不需要this指针
{
	cout << "手写默认构造函数执行" << endl;
	cout << "给对象申请的地址:" << this;
}
#endif
#if 0
Car::Car(const char *brand,const double weight,const int wheel)
{
	cout << "手写带参构造函数执行" << endl;
	strncpy(this -> brand,"\0",20);
	this -> weight = 0;
	//this -> wheel = 0;变成垃圾值
}
#endif
#if 1
//列表初始化，系统开销更小
//能够通过=赋值的参数
//c++的string类实现字符串=的功能
Car::Car(string brand,const double weight,const int wheel)
	:brand(brand),weight(weight),wheel(wheel)
{
	cout << "手写带参构造函数执行" << endl;
	cout << "参数列表实现初始化" << endl;
}
#endif
#if 1
Car::Car(const Car &car)
	brand(car.brand),weight(car.weight),wheel(car.wheel)
{
	cout << "调用拷贝构造函数" << endl;
	/*
	this -> brand = car.brand;//类里可以使用私有变量
	this -> weight = car.weight;
	this -> wheel = car.wheel;
	*/
}

#if 1
~Car::Car()
{
	cout << "disConstructor" << endl;
	cout << "释放对象地址:" << this << endl;
}

#endif
void Car::setBrand(string brand)
{
	this -> brand = brand;
}
void Car::setWeight(double weigth)
{
	this -> weight = weight;
}
void Car::setWheel(int wheel)
{
	this -> wheel = wheel;
}
string Car::getBrand(void)
{
	return this -> brand;
}
double Car::getWeight(void)
{
	return this -> weight;
}
int Car::getWheel(void)
{
	return this -> wheel;
}
