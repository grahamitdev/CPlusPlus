#include "car.h"

int main(void)
{
	Car car = Car("BMW",100.5);
	car.setBrand("Haval");
	car.setPrice(12);
	car.setWheel(4);
	car.introduce();
	cout << "======"<< endl;
	changeColour(car,"Red");
	car.introduce();
	cout << "======="<< endl;
	CarFriend carf;
	carf.changeColour(car,"Yellow");
	car.introduce();
	return 0;
}
