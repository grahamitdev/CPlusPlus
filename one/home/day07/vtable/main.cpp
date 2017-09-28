#include "vtable.h"


int main(void)
{
	cout << sizeof(A) << endl;
	A a;
	cout << &a << endl;

	func_t** ptr = (func_t**)&a;
	
	(*ptr)[0]();
	(*ptr)[1]();

	return 0;
}
