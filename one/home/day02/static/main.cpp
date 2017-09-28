#include <iostream>
using namespace std;


class A
{
public:
	static int a;
public:
	int getA()const
	{
		return a;
	}
};

//static 成员变量必须先初始化才能使用，否则链接错误
//注意：static 成员变量的内存空间既不是在声明类时分配，也不是在创建对象时分配，而是在初始化时分配。
//静态成员变量必须初始化，而且只能在类体外进行
int A::a = 5;

int main(void)
{
	A a;
	cout << a.getA() << endl;
	A b;
	//静态成员变量既可以通过对象名访问，也可以通过类名访问，但要遵循 private、protected 和 public 关键字的访问权限限制。
//	b.a = 6;
	A::a = 6;
	cout << a.getA() << endl;
	cout << b.getA() << endl;
//	a.A();
	return 0;

}
