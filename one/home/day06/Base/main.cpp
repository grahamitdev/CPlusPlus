#include "test.h"


int main(void)
{
	Derived d = Derived(1,2);
	cout << "a:"<< d.a<< ",b:" << d.b << endl;

	return 0;
}
