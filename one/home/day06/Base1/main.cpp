#include "test.h"


int main(void)
{
	Derived d = Derived(0,1,2);
	cout <<"num:"<<d.num<< ",a:"<< d.a<< ",b:" << d.b << endl;

	return 0;
}
