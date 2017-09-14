#include "car.h"

int main(void)
{
	//调用构造函数进行初始化,如果自己没有设置构造函数就会调用系统默认的构造函数
//	Car car = Car();
	//使用自定义的3个参数的构造函数进行初始化
	Car car = Car("Benz",3,4);
	cout << car.getBrand()<< endl;
	cout << car.getWeight()<< endl;
	cout << car.getWheel()<< endl;
	car.setBrand("BMW");
	car.setWeight(2);
	car.setWheel(4);
	cout << "======" << endl;
	cout << car.getBrand()<< endl;
	cout << car.getWeight()<< endl;
	cout << car.getWheel()<< endl;
	return 0;
}
