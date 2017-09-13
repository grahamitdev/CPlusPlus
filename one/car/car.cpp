#include "car.h"
#include <cstring>

char *Car::getBrand(void)
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

void Car::setBrand(const char *brand)
{
	strncpy(this -> brand,brand,20);
}
void Car::setWeight(double weigth)
{
	this -> weight = weight;
}
void Car::setWheel(int wheel)
{
	this -> wheel = wheel;
}
