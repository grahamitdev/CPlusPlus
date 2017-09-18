#include "car.h"

int main(void)
{
	Car car = Car();
	car.set_brand("BMW");
	car.set_price(100.0);
	car.show();
	return 0;
}
