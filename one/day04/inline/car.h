#ifndef _CAR_H_
#define _CAR_H_

#include <iostream>
#include <string>
using namespace std;

class Car
{
friend void changeColour(Car& car,const string& colour);
friend class CarFriend;

private:
	string brand;
	double price;
	int wheel;
	string colour;
public:
	Car();
//	Car(const string& brand);
//	Car(const double& price);
//	Car(const string& brand,const double& price);
	Car(const string& brand ,const double& price,const string& colour = "Black",const int& wheel = 4);
	inline void setBrand(const string& brand);
	inline void setPrice(const double& price);
	inline void setWheel(const int& wheel);
	inline void introduce()const;
};

class CarFriend
{
public:
	void changeColour(Car& car,const string& colour);
	
	
};




void Car::setBrand(const string& brand = "CHANGCHENG")
{
	this->brand = brand;
}

void Car::setPrice(const double& price = 60.5)
{
	this->price = price;
}

void Car::setWheel(const int& wheel = 4)
{
	this->wheel = wheel;
}

void Car::introduce()const
{
	cout << brand << ","<<price << ","<<colour<<","<<wheel<<endl; 
}

void changeColour(Car& car,const string& colour);


#endif
