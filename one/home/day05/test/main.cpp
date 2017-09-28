#include <iostream>
using namespace std;

class Parent
{
private:
	int i;
protected:
	int j;
public:
	int k;
};

class Child1:public Parent
{
public:
	void func()
	{
	//	cout << i <<endl; //error
		cout << j <<endl;
		cout << k <<endl;
	}
};
class Child2:protected Parent
{
public:
	void func()
	{
//		cout << i <<endl;
		cout << j <<endl;
		cout << k <<endl;
	}
};
class Child3:private Parent
{
public:
	void func()
	{
//		cout << i <<endl;
		cout << j <<endl;
		cout << k <<endl;
	}
};
class Child4: Parent
{
public:
	void func()
	{
//		cout << i <<endl;
		cout << j <<endl;
		cout << k <<endl;
	}
};

int main(void)
{
	Child1 c1 = Child1();
//	cout <<c1.i << endl;
//	cout <<c1.j << endl;
	cout <<c1.k << endl;
	Child2 c2;
//	cout <<c2.i << endl;
//	cout <<c2.j << endl;
//	cout <<c2.k << endl;
	Child3 c3;
//	cout <<c3.i << endl;
//	cout <<c3.j << endl;
//	cout <<c3.k << endl;
	Child4 c4;
//	cout <<c4.i << endl;
//	cout <<c4.j << endl;
//	cout <<c4.k << endl;
	
	return 0;
}
