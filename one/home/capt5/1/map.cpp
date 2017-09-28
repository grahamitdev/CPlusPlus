#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
	string str;
	cout << "输入一串字符:";
	cin >> str;
	map<char,int>myMap;

	int i = 0;
	for(i = 0;i < str.size();++i)
	{
		++myMap[str[i]];
	}
	map<char,int>::iterator it;
	for(it = myMap.begin();it != myMap.end();++it)
	{
		cout << it -> first << ":" << it -> second << endl;
	}

	return 0;
}
