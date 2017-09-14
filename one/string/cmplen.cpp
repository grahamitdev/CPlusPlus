#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1;
	string str2;
	cout << "输入：" << endl;
	cin >> str1;
	cout << "输入：" << endl;
	cin >> str2;
	if(str1.size() > str2.size())
	{
		cout << str1 << endl;
	}
	else if(str1.size() < str2.size())
	{
		cout << str2 << endl;
	}
	else
	{
		cout << str1 << "和" << str2 << "等长" << endl;
	}



	return 0;
}
