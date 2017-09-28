#ifndef _INLINE_H_
#define _INLINE_H_
#include <string>
#include <iostream>
using namespace std;
class Car{
private:
	string brand;
	double weight;
	int wheel;
	string color;
public:
	Car();
	Car(const string brand,const double weight,const string color,const int wheel = 4);
	inline void setBrand(string brand);
	inline void setWeight(double weight);
	inline void setWheel(int wheel);
	inline void setColor(string color);
	inline string getBrand(void);
	inline double getWeight(void);
	inline int getWheel(void);
	inline string getColor(void);
	inline void showCar(void);
};
Car::Car()
{

}
Car::Car(const string brand,const double weight,const string color,const int wheel)
	:brand(brand),weight(weight),color(color),wheel(wheel)
{

}
void Car::setBrand(string brand)
{
	this -> brand = brand;
}
void Car::setWeight(double weight)
{
	this -> weight = weight;
}
void Car::setWheel(int wheel)
{
	this -> wheel = wheel;
}
void Car::setColor(string color)
{
	this -> color = color;
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
string Car::getColor(void)
{
	return this -> color;
}
void Car::showCar(void)
{
	cout << brand << endl;
	cout << weight  << endl;
	cout << wheel << endl;
	cout << color << endl;
}

#endif
