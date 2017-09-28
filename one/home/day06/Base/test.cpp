#include "test.h"

BaseA::BaseA(const int& a)
	:a(a)
{
	cout << "BaseA()"<< endl;
}

BaseA::~BaseA()
{
	cout << "~BaseA()" << endl;
}

BaseB::BaseB(const int& b)
	:b(b)
{
	cout << "BaseB()" << endl;
}

BaseB::~BaseB()
{
	cout << "~BaseB()" << endl;
}

Derived::Derived(const int& a,const int& b)
	:BaseA(a),BaseB(b)
{
	cout << "Derived()"<< endl;	
}

Derived::~Derived()
{
	cout << "~Derived()" << endl;
}
	


