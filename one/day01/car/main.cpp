#include "car.h"

int main(void)
{
	Car car = Car();
	car.setBrand("BMW");
	car.setWeight(2);
	car.setWheel(4);
	cout << "======" << endl;
	cout << car.getBrand()<< endl;
	cout << car.getWeight()<< endl;
	cout << car.getWheel()<< endl;
	return 0;
}
