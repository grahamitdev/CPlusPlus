#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(void)
{
	cout << "请输入一串字符:";
	char character = '\0';
	map<char,int>chars;
	map<char,int>::iterator it;
	while(1)
	{
		int count = 0;
		system("stty -icanon");
		character = getchar();
		system("stty icanon");
		if(character == 27)//ESC
		{
			cout << endl;
			break;
		}
		for(it = chars.begin();it!=chars.end();++it)
		{
			const char &ch = it -> first;
			if(character == ch)
			{
				count = it -> second;
				++count;
				chars.erase(it);
				pair<char,int>p(character,count);
				chars.insert(p);
			}
		}
		if(count == 0)
		{
			pair<char,int>p(character,1);
			chars.insert(p);
		}
	}
	
	for(it = chars.begin();it != chars.end();++it)
	{
		const char &ch = it -> first;
		int count = it -> second;
		cout << ch << ":" << count << endl;
	}
	
	return 0;
}
