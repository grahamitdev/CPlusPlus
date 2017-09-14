#ifndef _CAR_H_
#define _CAR_H_
#include <iostream>
#include <cstring>
using namespace std;

/*
	this指针：
	每个对象在被创建时都会产生一个指向自己的指针，
	当形参与类中的成员变量同名时必须使用this指针来区别类的成员和形参


*/


class Car
{
private:
	char brand[20];
	int weight;
	int wheel;
public:
	const char* getBrand(void)const;
	int getWeight(void)const;
	int getWheel(void)const;
	void setBrand(const char* brand);
	void setWeight(int weight);
	void setWheel(int wheel);
};
#endif
