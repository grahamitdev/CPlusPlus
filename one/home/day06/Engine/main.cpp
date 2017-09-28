#include "engine.h"


int main(void)
{
	Engine e;
	e.addOil();
	e.boostUp();
//	DirverSystem d;
//	d.addOil();
//	d.boostUp();
	Car c;
	c.boostUp();
	c.addOil();
	return 0;
}
