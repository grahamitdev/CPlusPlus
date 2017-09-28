#include "mystring.h"
#include <iostream>
using namespace std;

int main(void)
{
	MyString string1;
	MyString string2();
	MyString string3("helloworld");
	MyString string4 = "hello";
	if(string3 == string4)
	{
		cout << "相等" << endl;
	}



	return 0;
}
