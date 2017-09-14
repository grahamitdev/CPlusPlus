#include "car.h"

Car::Car()
	:brand("\0"),weight(0),wheel(0)
{
	cout << "Constructor..."<< endl;
/*	brand = "\0";
	weight = 0;
	wheel = 0;
*/
}
Car::Car(string brand)
	:brand(brand),weight(2),wheel(4)
{
		
}

//使用列表初始化仅限于构造函数内
Car::Car(string brand,const int weight,const int wheel)
	:brand(brand),weight(weight),wheel(wheel)
{
/*
//	strncpy(this->brand,brand,20);
	this->brand = brand;
	this->weight = weight;
	this->wheel = wheel;
*/
}

Car::Car(const Car& car)
	:brand(car.brand),weight(car.weight),wheel(car.wheel)
{
	cout << "Copy Constructor..."<< endl;
/*
	this->brand = car.brand;
	this->weight = car.weight;
	this->weight = car.wheel;
*/
}

Car::~Car()
{
	cout << this << endl;
	cout << "disConstructor..." << endl;
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
