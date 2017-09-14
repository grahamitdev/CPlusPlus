#include "car.h"
#include <iostream>
using namespace std;



/*
	this指针
	每个对象在被创建时都会产生一个指向自己的指针
	当形参与类中的成员变量同名时必须
*/
int main(void)
{	
	//在没有手写任何构造函数前
	//Car car;调用默认无形的构造函数
	//被赋予垃圾值
	//在手写Car::Car(){...}后
	//默认构造函数被覆盖
	//Car car;Car car = Car();都调用手写Car::Car(){...}
	//如果手写Car::Car(...){...}
	//而没有手写Car::Car(){...}
	//那么Car car;和Car car = Car();都将报错
	//因为不管以怎样的方式重写构造函数
	//默认构造函数都不生效了
	//构造函数分为：默认构造函数、自定义构造函数、拷贝构造函数
	//析构函数：只有一种
	Car car1;//有默认构造函数、默认析构函数、默认拷贝函数
	Car car2 = Car();
	Car car3 = Car("BMW",2,4);
	Car car4 = car3;
	//会调用拷贝构造函数(默认隐式构造函数)
	//可以手写实现
	cout << "汽车1信息:" << endl;
	cout << car1.getBrand() << endl;
	cout << car1.getWeight() << endl;
	cout << car1.getWheel() << endl;
	cout << "car1的地址：" << &car1 << endl;//C++取地址,不是引用
	cout << "========================\n";
	cout << "汽车2信息:" << endl;
	cout << car2.getBrand() << endl;
	cout << car2.getWeight() << endl;
	cout << car2.getWheel() << endl;
	cout << "========================\n";
	cout << "汽车3信息:" << endl;
	cout << car3.getBrand() << endl;
	cout << car3.getWeight() << endl;
	cout << car3.getWheel() << endl;
	cout << "========================\n";
	cout << "汽车4信息:" << endl;
	cout << car5.getBrand() << endl;
	cout << car5.getWeight() << endl;
	cout << car5.getWheel() << endl;
	cout << "========================\n";


	//自动调用析构函数
	//如果不手写析构函数，调用默认的
	//如果手写了，调用手写的
	//FILO

	return 0;
}
