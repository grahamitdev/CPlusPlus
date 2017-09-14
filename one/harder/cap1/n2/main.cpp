#include <iostream>
using namespace std;

int main(void)
{
	unsigned short int shortsmall = 65535;
	int i = 0;
	for(i = 0;i < 2;++i)
	{
		++shortsmall;
		cout << shortsmall << endl;
	}
	//0
	//1


	return 0;
}
