#include <iostream>
using namespace std;

void func(int *&p)
{
	int a = 1;
	p = &a;
	cout << p << "," << *p << endl;
}

int main()
{
	int *p = NULL;
	func(p);
	if(p == NULL)
	{
		cout << "P == NULL"<<endl;
	}

	return 0;
}
