#include <iostream>
using namespace std;

void func(int a,float b = 1.2f,char c = '#')
{
	cout << a <<","<< b <<","<<c << endl;
}



int main(void)
{
	func(10,3.5f,'@');
	func(20,9.8f);
	func(30);
//	func('a');
//	func(1.2);
	return 0;
}
