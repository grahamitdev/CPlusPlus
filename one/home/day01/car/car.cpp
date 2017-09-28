#include "car.h"

const char* Car::getBrand(void)const
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

void Car::setBrand(const char* brand)
{
	strncpy(this->brand,brand,20);
}

void Car::setWeight(int weight)
{

	this->weight  = weight;
}

void Car::setWheel(int wheel)
{
	this->wheel = wheel;
}
