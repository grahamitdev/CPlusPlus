#include <iostream>
using namespace std;

#define PI 3.14

typedef int myint;
//给20个字符的字符数组一个别名为buff
typedef char buff[20];

typedef void (*func_t)(void);

void function(void)
{
	cout << "emmmmmmmmmm...." << endl;
}

int main(void)
{
	myint a = 5;
	cout << a << endl;
	buff test = "Hello world";	
	cout << sizeof(test) << endl;
	cout << test<<endl;
	//函数指针指向一个函数	
	func_t ptr = function;
	ptr();


	return 0;
}
