#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
void input(void)
{
	cout << "输入n个整数(0~9):";
	int i = 0;
	int num = 0;
	for(i = 0;i < 10;++i)
	{
		cin >> num;
		++myMap[num];
	}	
}
int main(void)
{
	
	map<int,int> myMap;
	map<int,int>::iterator it;
	for(it = myMap.begin();it != myMap.end();++it)
	{
		cout << it -> first << ":" << it -> second <<endl;
	}

	return 0;
}
