#include <iostream>
#include <string>
using namespace std;

class Action
{
private:
protected:
public:
	Action(){}
	virtual void fun(void) = 0;
};
class Real:public Action
{
private:
protected:
public:
	Real(){}
	~Real(){}
	void fun(void)
	{
		cout << "fun in Read" << endl;
		cout << "I live you" << endl;
	}
};
class Proxy:public Action
{
private:
	Real real;
protected:
public:
	Proxy(){}
	Proxy(Real real)
		:Action(),real(real)
	{

	}
	~Proxy(){}
	void fun(void)
	{
		cout << "fun in proxy" << endl;
		real.fun();
	}
};

int main(void)
{
	Real real = Real();
	Proxy proxy = Proxy(real);
	proxy.fun();


	return 0;
}
