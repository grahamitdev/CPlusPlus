#include "car.h"

Car::Car()
{
	cout << "Constructor..."<< endl;
	brand = "\0";
	weight = 0;
	wheel = 0;
}

//使用列表初始化仅限于构造函数内
Car::Car(string brand,const int weight,const int wheel)
	:brand(brand),weight(weight),wheel(wheel)
{
/*
	strncpy(this->brand,brand,20);
	this->weight = weight;
	this->wheel = wheel;
*/
}

string Car::getBrand(void)const
{
	return this->brand;
}

int Car::getWeight(void)const
{
//	this->weight = 100;
	return this->weight;
}

int Car::getWheel(void)const
{
	return this->wheel;
}

void Car::setBrand(string brand)
{
//	strncpy(this->brand,brand,20);
	this->brand = brand;
}

void Car::setWeight(int weight)
{

	this->weight  = weight;
}

void Car::setWheel(int wheel)
{
	this->wheel = wheel;
}
