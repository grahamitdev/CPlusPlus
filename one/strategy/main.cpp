#include <iostream>
#include <string>
using namespace std;

class Strategy
{
private:
protected:
public:
	Strategy()
	{
		cout << "基类构造" << endl;
	}
	virtual ~Strategy()//如果不声明为虚析构
	{
		cout << "基类析构" << endl; 
	}
	virtual void fun(void) = 0;
};
class A:public Strategy
{
private:
protected:
public:
	A()
	{
		cout << "A的构造" << endl; 	
	}
	~A()
	{
		cout << "A的析构" << endl;
	}
	void fun(void)
	{
		cout << "fun in A" << endl;
	}
};
class B:public Strategy
{
private:
protected:
public:
	B()
	{
		cout << "B的构造" << endl;
	}
	~B()
	{
		cout << "B的析构" << endl;
	}
	void fun(void)
	{	
		cout << "fun in B" << endl;
	}
};

class Context
{
private:
	Strategy *stg;//关键
protected:
public:
	Context(Strategy *stg)//关键
		:stg(stg)
	{
		
	}
	~Context(){}
	void DoFun(void)
	{
		stg -> fun();//关键
	}
};

int main(void)
{
	Context context = NULL;
	Strategy *stg = NULL;
	A *a = new A();
	stg = a;//假基类对象指针名
	context = Context(stg);
	context.DoFun();
	
	delete stg;

	return 0;
}
