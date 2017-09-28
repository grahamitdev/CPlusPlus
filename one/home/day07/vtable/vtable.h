#ifndef _VTABLE_H
#define _VTABLE_H

#include <iostream>
using namespace std;

//如果一个类中如果有虚函数，这个类至少占4个字节

typedef void (*func_t)(void);

class A
{
public:
	virtual void funcA()
	{
		cout << "funcA()" << endl;
	}
	virtual void funcB()
	{
		cout << "funcB()" << endl;
	}
};

#endif
