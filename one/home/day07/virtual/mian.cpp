#include <iostream>
using namespace std;


class Base
{
public:
	virtual void funcA()
	{
	
	}
	virtual ~Base()
	{
		cout << "Base::~Base" << endl;
	}
};
class Derive:public Base
{
public:
	 virtual void funcA()
	 {
		cout << "Derive::funcA" << endl;
	 }
	 ~Derive()
	 {
		cout << "Derive::~Derive" << endl;
	 }
};

int main(void)
{
	Base* b = new Derive();
	b->funcA();
	delete b;
	return 0;
}	


