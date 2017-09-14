#ifndef _CAR_H_
#define _CAR_H_
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/*
	this指针：
	每个对象在被创建时都会产生一个指向自己的指针，
	当形参与类中的成员变量同名时必须使用this指针来区别类的成员和形参
*/
/*
	构造函数：
	1.函数名与类名相同
	2.无返回值
	3.用来对对象进行初始化
*/


class Car
{
private:
	string brand;
	int weight;
	int wheel;
public:
	Car();//自定义无参构造函数
	Car(string brand,const int weight,const int wheel);//自定义3个参数的构造函数
	string getBrand(void)const;
	int getWeight(void)const;
	int getWheel(void)const;
	void setBrand(string brand);
	void setWeight(int weight);
	void setWheel(int wheel);
};
#endif
