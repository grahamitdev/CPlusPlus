#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString{
private:
	char *data;
public:
	MyString();
	MyString(const MyString &str);
	MyString(const char *str);
	MyString(int n,char ch);
	~MyString();

	char *getData();




};


#endif
