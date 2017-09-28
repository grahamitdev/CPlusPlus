#include "car.h"

int main(void)
{
	Car car = Car();//对象初始化
	car.introduce();
	Car car1 = car;
	car1.introduce();
	return 0;
}
