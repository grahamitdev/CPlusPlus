#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1;
	string str2;
	while(1)
	{
		cout << "请输入:";
		cin >> str1;
		cout << "请输入:";
		cin >> str2;
		if(str1 > str2)
		{
			cout << str1 << ">" << str2 << endl;
		}
		else if(str1 < str2)
		{
			cout << str1 << "<" << str2 << endl;
		}
		else
		{
			cout << str1 << "=" << str2 << endl;
}
	}
	return 0;
}
