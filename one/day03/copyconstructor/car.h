#ifndef _CAR_H_
#define _CAR_H_

#include <iostream>
#include <string>
using namespace std;

class Car{
private:
	string brand;
	int weight;
	int wheel;
public:
	Car();
	//自定义的拷贝构造函数，会屏蔽系统提供的所有构造函数，不会屏蔽自定义的构造函数
	Car(const Car& car);
	void introduce();
};
#endif
