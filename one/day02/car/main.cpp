#include "car.h"

int main(void)
{
	//调用构造函数进行初始化,如果自己没有设置构造函数就会调用系统默认的构造函数
//	Car car = Car();
	//使用自定义的3个参数的构造函数进行初始化
	Car car = Car("Benz",3,4);
	cout << "car :" << &car << endl;
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
	//会调用拷贝构造函数
	Car car1 = car;
	cout << "car1 :" << &car1 << endl;
	cout << "======" << endl;
	cout << car1.getBrand()<< endl;
	cout << car1.getWeight()<< endl;
	cout << car1.getWheel()<< endl;
	//显式调用了构造函数
	//Car car2 = Car("QQ");
	
	//显式调用了构造函数
//	Car car2("QQ");
	//隐式调用了构造函数
	Car car2 = {"QQ"};
	cout << "======" << endl;
	cout << car2.getBrand()<< endl;
	cout << car2.getWeight()<< endl;
	cout << car2.getWheel()<< endl;
	
//	Car car;
//	Car car3();
	Car car3 = Car();
	return 0;
}
