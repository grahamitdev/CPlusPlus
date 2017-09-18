#include "mystring.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

MyString::MyString()
{
	cout << "MyString()" << endl;
	data = new char[1];
	data[0] = '\0';
}
MyString::MyString(const MyString &str)
{
	cout << "MyString(const MyString &str)" << endl;
	int len = strlen(str.data);
	if(str.data == NULL)//这个方法再类里，所以可以访问private
	{
		data = new char[1];
		data[0] = '\0';
	}
	else
	{
		int len = strlen(str.data);
		data = new char[len + 1];
		strcpy(data,str.data);
	}
}
MyString::MyString(const char *str)
{
	cout << "MyString(const char *str)" << endl;
	if(str == NULL)
	{
		data = new char[1];
		data[0] = '\0';
	}
	else
	{
		int len = strlen(str);
		data = new char[len + 1];
		strcpy(data,str);//\0已经拷过来了
	}
}
MyString::MyString(int n,char ch)
{
	cout << "String(int n,char ch)" << endl;
	data = new char[n + 1];
	int i = 0;
	for(i = 0;i < n;++i)
	{
		data[i] = ch;
	}
	data[n] = '\0';
}
MyString::~MyString()
{
	cout << "~MyString()" << endl;
	if(data != NULL)
	{
		delete []data;//释放这块连续堆空间
	}
}

char *MyString::getData()
{
	return this -> data;
}
