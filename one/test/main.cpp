#include <iostream>
#include <string>
using namespace std;
class Base
{
private:
protected:
public:
	void pfun(void)
	{
		cout << "pfun in Base" << endl;
	}
	void pfun_w(void)
	{
		cout << "pfun_w in Base" << endl;
	}

	virtual void vfun(void)
	{
		cout << "vfun in Base" << endl;
	}
	virtual void vfun_w(void)
	{
		cout << "vfun_w in Base" << endl;
	}

};
class A:public Base
{
private:
	int i;
protected:
public:
	void pfun_w(void)
	{
		cout << "pfun_w in A" << endl;
	}
	virtual void vfun_w(void)
	{
		cout << "vfun_w in A" << endl; 
	}
	void pfunA(void)
	{
		cout << "pfunA" << endl;
	}
	virtual void vfunA(void)
	{
		cout << "vfunA" << endl;
	}
};
int main(void)
{
	cout << "============指针============" << endl; 
	A *a = new A();
	Base *b = new Base();//真基类指针
	Base *c = static_cast<Base *>(a);//上转型
	cout << "真基类指针" << endl;	
	b -> vfun();
	b -> vfun_w();
	b -> pfun();
	b -> pfun_w();
	cout << "派生类指针上转型成基类指针" << endl;	
	c -> vfun();
	c -> vfun_w();
	c -> pfun();
	c -> pfun_w();
	//c -> pfunA();//没有这个成员
	//c -> vfunA();//没有这个成员
	cout << "--------------------------" << endl;
	cout << "真基类下转型为派生类指针" << endl;
	A *ja = static_cast<A *>(b);
	ja -> vfun();
	ja -> vfun_w();
	ja -> pfun();
	ja -> pfun_w();
	ja -> pfunA();//段错误
	ja -> vfunA();//段错误
	cout << "--------------------------" << endl;
	cout << "真派生类指针" << endl;
	a -> vfun();
	a -> vfun_w();
	a -> pfun();
	a -> pfun_w();
	a -> pfunA();
	a -> vfunA();

	cout << "=======引用&直接变量=======" << endl; 
	A aa = A();
	Base bb = aa;
	
	bb.vfun();
	bb.vfun_w();
	bb.pfun();
	bb.pfun_w();
	//bb.pfunA();
	//bb.vfunA();
	cout << "--------------------------" << endl;

	aa.vfun();
	aa.vfun_w();
	aa.pfun();
	aa.pfun_w();
	aa.pfunA();
	aa.vfunA();







	delete b;
	a = NULL;
	b = NULL;

	return 0;
}
