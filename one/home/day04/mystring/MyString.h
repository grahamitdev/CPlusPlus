#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <cstring>
#include <iostream>
using namespace std;

class MyString
{
private:
	char* data;
public:
	MyString();
	MyString(const MyString& str);
	MyString(const char* str);
	MyString(int n,char ch);
	~MyString();
	char* getData();
	bool empty();
	int size();
	MyString operator+(const MyString& str);
	bool operator==(const MyString& str);
	MyString& operator=(const MyString& str);
	MyString& operator+=(const MyString& str);
	char operator[](const int& index);
	friend ostream& operator<<(ostream& output,const MyString& str);
	friend istream& operator>>(istream& input,const MyString& str);
};
#endif
