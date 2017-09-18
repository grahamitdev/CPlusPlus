#include "car.h"

void Car::introduce()
{
	cout << brand << endl;
	cout << weight << endl;
	cout << wheel << endl;
}

Car::Car()
{
	brand = "BMW";
	weight = 2;
	wheel = 4;
}


Car::Car(const Car& car)
{
	cout << "copy..." << endl;
	brand = car.brand;
	weight = car.weight;
	wheel = car.wheel;
}

