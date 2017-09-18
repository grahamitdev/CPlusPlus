#include <iostream>
using namespace std;

void func(int *&b)
{
	int a = 1;
	cout << __LINE__ << b <<endl;
	b = &a;
	cout << __LINE__ << b << endl;
}
int main(void)
{
	int *p = NULL;
	cout << __LINE__ << p << endl;
	func(p);//p的反面
	if(p == NULL)
	{
		cout << "p == NULL" << endl;
	}
	return 0;
}
