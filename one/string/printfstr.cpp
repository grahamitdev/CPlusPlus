#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>
using namespace std;

int main(void)
{
	string str;
	cout << "输入：";
	cin >> str;
	int i = 0;
	for(i = 0;i < str.size();++i)
	{
		cout << str[i] << endl;
		sleep(1);
	}
	cout << "=======================" << endl;
	for(i = 0;i < str.size();++i)
	{
		printf("%c\n",str[i]);
	}

	return 0;
}
