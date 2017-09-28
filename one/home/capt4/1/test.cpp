#include <iostream>
using namespace std;

class A
{
public:
	int a;
	int b;
	A(const int &a,const int &b)
	{
		this -> a = a;
		this -> b = b;
	}
	void set_a(void)
	{
		a = 10;
	}
	void set_b(void)
	{
		b = 10;
	}
};

int main(void)
{
	A t = A(1,2);
	

	return 0;	
}
