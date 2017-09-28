#include <iostream>
using namespace std;


class A
{
public:
	int n;
	A(const int& n)
		:n(n){}
	virtual void introduce()
	{
		cout << "A : n = " << this->n << endl;
	}
};

class B:public A
{
public:
	B(const int& n)
		:A(n){}
	virtual void introduce()
	{
		cout << "B : n = " << this->n << endl;	
	}
};

class C:public A
{
public:
	int c;
	C(const int& n)
		:A(n){}
	virtual void introduce()
	{
		cout << "C: n = " << this->n << endl;	
	}

};

int main(void)
{
	A *a = new A(1);
	a->introduce();
	a = new B(2);
	a->introduce();
	a = new C(3);
	a->introduce();
	
	
	

	return 0;
}	
