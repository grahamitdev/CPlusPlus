#include <iostream>
using namespace std;


int main(int argc,char** argv)
{
	int a = 10;
	int b = 100;
	int &c = a;
	c = b;
	cout << "a:" << a <<","<<&a<<endl;
	cout << "c:" << c <<","<<&c<<endl;
//	c = 5;
	a = 6;
	cout << "============"<<endl;
	cout << "a:" << a <<endl;
	cout << "c:" << c << endl;
//	int &i = 1.23;//error
	const int &j = a;
	const char &p = 'A';
//	int &k;//error
	
	int l;
	int &m = l;
	
	return 0;
}




