#include "test.h"


Base::Base(const int& num)
	:num(num)
{
	cout << "Base()"<< endl;
}


BaseA::BaseA(const int& num,const int& a)
	:Base(num),a(a)
{
	cout << "BaseA()"<< endl;
}

BaseA::~BaseA()
{
	cout << "~BaseA()" << endl;
}

BaseB::BaseB(const int& num,const int& b)
	:Base(num),b(b)
{
	cout << "BaseB()" << endl;
}

BaseB::~BaseB()
{
	cout << "~BaseB()" << endl;
}

Derived::Derived(const int& num,const int& a,const int& b)
	:Base(num),BaseA(num,a),BaseB(num,b)
{
	cout << "Derived()"<< endl;	
}

Derived::~Derived()
{
	cout << "~Derived()" << endl;
}
	


