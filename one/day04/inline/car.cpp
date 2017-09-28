#include "car.h"

Car::Car()
{
	brand = "Benz";
	price = 100.0;
	wheel = 4;
}
/*
Car::Car(const string& brand)
	:brand(brand),price(100.0),wheel(4)
{
	
}
*/
/*
Car::Car(const double& price)
	:brand("Benz"),price(price),wheel(4)
{

}
*/
/*
Car::Car(const string& brand,const double& price)
	:brand(brand),price(price),wheel(4)
{

}
*/

Car::Car(const string& brand,const double& price,const string& colour,const int& wheel)
	:brand(brand),price(price),colour(colour),wheel(wheel)
{

}


void changeColour(Car& car,const string& colour)
{
	car.colour = colour;
}

void CarFriend::changeColour(Car& car,const string& colour)
{
	car.colour = colour;


}


