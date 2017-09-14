#include <iostream>
using namespace std;

int main(void)
{
	short int shortsmall = 32767;
	for(int i = 0;i < 2;++i)
	{
		++shortsmall;
		cout << shortsmall << endl;
	}
	
	//-32768
	//-32767

	return 0;
}
