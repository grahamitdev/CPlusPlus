#include "string.h"
#include <iostream>

using namespace std;

int main(void)
{
	char string1[20] = "";
	char string2[20] = "";
	while(1)
	{
		cout << "请输入一个字符串:";
		cin >> string1;
		cout << "请再输入一个字符串:";
		cin >> string2;
		StrCmp string = StrCmp();
		string.setString1(string1);
		string.setString2(string2);
		cout << string.strCmp() << endl;
	}
	
	return 0;
}

 
