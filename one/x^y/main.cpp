#include "pow.h"
#include <iostream>
using namespace std;
int main(void)
{
	Pow p = Pow(2.1,10);
	cout << p.getResult() << endl;

	return 0;
}
