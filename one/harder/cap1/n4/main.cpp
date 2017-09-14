#include <iostream>
using namespace std;

int main(void)
{
	int myArray[5] = {};
	for(int i = 0;i < 5;++i)
	{
		cout << "value for myArray[i]:";
		cin >> myArray[i];
	}
	for(int i = 0;i < 5;++i)
	{
		cout << "i:" << myArray[i] << endl;
	}

	return 0;
}
