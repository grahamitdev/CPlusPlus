#include <iostream>
#include "car.h"
using namespace std;



void Car::introduce()
{
	cout << brand << endl;
	cout << weight << endl;
	cout << wheel << endl;
}
Car::Car(const Car &car)
{
	cout << "copy" << endl;
	this -> brand = car.brand;
	this -> weight = car.weight;
	this -> wheel = car.wheel;
}
Car::Car()
{
	this -> brand = "BMW";
	this -> weight = 2;
	this -> wheel = 4;
}
