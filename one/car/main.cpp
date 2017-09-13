#include "car.h"
#include <iostream>
using namespace std;



/*
	this指针
	每个对象在被创建时都会产生一个指向自己的指针
	当形参与类中的成员变量同名时必须
*/
int main(void)
{
	Car car = Car();
	char name[20] = "";
	double weight = 0.00;
	int count = 0;
	while(1)
	{
		cout << "请输入汽车名字:";
		cin >> name;
		cout << "重量:";
		cin >> weight;
		cout << "轮胎个数:";
		cin >> count;
		//cin >> name >> weight >> count;
		car.setBrand(name);
		car.setWeight(weight);
		car.setWheel(count);

		cout << "汽车信息:" << endl;
		cout << car.getBrand() << endl;
		cout << car.getWeight() << endl;
		cout << car.getWheel() << endl;
		cout << "========================\n";
	}
	return 0;
}
