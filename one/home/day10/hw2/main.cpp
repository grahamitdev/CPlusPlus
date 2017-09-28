#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(void)
{
	string str;
	map<char,int> myMap;
	map<char,int>::iterator it;
	cout << "please input a string:"<< endl;
	cin >> str;//abcdabcd
	int i = 0;
	for(;i < str.size();i++)
	{
		myMap[str[i]]++;//a----2
						//b----2
						//c----2
						//d----2

	}
	for(it = myMap.begin();it != myMap.end();it++)
	{
		cout << it->first <<":"<<it->second<< endl;
	}


	return 0;
}
