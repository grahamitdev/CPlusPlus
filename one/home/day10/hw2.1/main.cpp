#include <iostream>
#include <string>
#include <map>
using namespace std;

//typedef pair<const Key, T> value_type;
//pair<iterator,bool> insert (const value_type& val);

int main(void)
{
	string str;
	map<char,int> myMap;
	map<char,int>::iterator it;
	pair<map<char,int>::iterator,bool> ret;
	cout << "please input a string:" << endl;
	cin >> str;
	char ch;
	for(int i = 0;i < str.size();i++)
	{
		ch = str[i];
		//产生一个健和值构成的键值对
		pair<char,int> p(ch,1);
		//将键值对p插入这个关联容器
		ret = myMap.insert(p);
		//如果插入失败返回的pair模版类型的second就为false，同时pair模版的first就为指向失败所在处的迭代器
		if(ret.second == false)
		{
			it = ret.first;
			it->second++;
		}
	}
	for(it = myMap.begin();it != myMap.end();it++)
	{
		cout << (*it).first << ":" << (*it).second << endl;
	}


	return 0;
}

