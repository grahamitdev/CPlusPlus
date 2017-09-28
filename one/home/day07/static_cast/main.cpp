#include <iostream>
using namespace std;

class Base
{
public:
	virtual void funcA()
	{
		cout << "BaseA::funcA" << endl;
	}
};

class Derive:public Base
{
public:
	virtual void funcA()
	{
		cout << "Derive::funcA" << endl;
	}
	virtual void funcB()
	{
		cout << "Derive::funcB"<< endl;
	}
};

int main(void)
{
//进行上行转换（把派生类的指针或引用转换成基类表示）是安全的；
//进行下行转换（把基类指针或引用转换成派生类表示）时，由于没有动态类型检查，所以是不安全的。
	Base* b = static_cast<Base* >(new Derive());
	b->funcA();

	//不会进行安全检查，derive不会被置空
	Derive* derive = static_cast<Derive*>(new Base());

	//会进行安全检查，derive1指针会被置NULL
	Derive* derive1 = dynamic_cast<Derive*>(new Base());
	if(deriver1 == NULL)
	{
		cout << "error" << endl;
	}
	else
	{
		//使用deriver1
	}
	//基类对象b指向了派生类，空间是派生类申请的，所以能成功
	Derive* d = dynamic_cast<Derive*>(b);
	d->funcB();

	
	return 0;
}
