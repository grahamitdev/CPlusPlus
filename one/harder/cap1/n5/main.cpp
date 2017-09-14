#include <iostream>
using namespace std;

enum Days{
	Monday,
	Tuesday,
	Wednsday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

int main(void)
{
	enum Days days[7] = {};
	Days day = Monday;
	for(int i = 1;i < 8;++i)
	{
		days[i] = i;
	}
	cout << Monday << endl;
	cout << Thursday << endl;
	cout << Wednsday << endl;
	cout << Thursday << endl;
	cout << Friday << endl;
	cout << Saturday << endl;
	cout << Sunday << endl;
	


	return 0;
}
