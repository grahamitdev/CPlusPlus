#include "car.h"
Car::Car(int wheel)
	:wheel(wheel)
{
}
string Car::get_brand(void)const
{
	return this -> brand;
}
double Car::get_price(void)const
{
	return this -> price;
}
int Car::get_wheel(void)const
{
	return this -> wheel;
}
void Car::set_brand(string brand)
{
	this -> brand = brand;
}
void Car::set_price(double price)
{
	this -> price = price;
}
void Car::set_wheel(int wheel)
{
	this -> wheel = wheel;
}

