#include <iostream>
#include "head.h"
using namespace std;
int main(void)
{
	cout << "2 ^ 2 + 3 ^ 3 =" << FUN::func(2,3) << endl;
	cout << "2.1 ^ 2 + 3.1 ^ 2 = " << FUN::func(2.1,3.1) << endl;

	return 0;
}
