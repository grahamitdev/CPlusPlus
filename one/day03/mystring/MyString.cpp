#include "MyString.h"

MyString::MyString()
{
	cout << __func__<<endl;
	data = new char[1];
	data[0] = '\0';
}

MyString::MyString(const char* str)
{
	cout << __func__<<endl;
	if(str == NULL)
	{
		data = new char[1];
		data[0] = '\0';	
	}
	else
	{
		int len = strlen(str);
		data = new char[len+1];
		strcpy(data,str);
	}
}

MyString::MyString(const MyString& str)
{
	if(str.data == NULL)
	{
		data = new char[1];
		data[0] = '\0';
	}
	else
	{
		int len = strlen(str.data);
		data = new char[len+1];
		strcpy(data,str.data);
	}
}

MyString::MyString(int n,char ch)
{
	int i = 0;
	data = new char[n+1];
	for(;i < n;i++)
	{
		data[i] = ch;
	}
	data[n] = '\0';
}

MyString::~MyString()
{
	if(data != NULL)
	{
		delete []data;
	}
}

char* MyString::getData()
{
	return data;
}







