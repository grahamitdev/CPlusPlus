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

bool MyString::empty()
{
	if(size() <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int MyString::size()
{
	if(data != NULL)
	{
		return strlen(data);
	}
	else
	{
		return -1;
	}
}

MyString MyString::operator+(const MyString& str)
{
	MyString temp;
	delete []temp.data;
	int len = strlen(this->data)+strlen(str.data);	
	temp.data = new char[len+1];
	strcpy(temp.data,this->data);
	strcat(temp.data,str.data);
	return temp;
}

bool MyString::operator==(const MyString& str)
{
	if(strcmp(this->data,str.data) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

MyString& MyString::operator=(const MyString& str)
{
	delete []this->data;
	int len = strlen(str.data);
	this->data = new char[len+1];
	strcpy(this->data,str.data);
	return *this;
}

MyString& MyString::operator+=(const MyString& str)
{
	MyString temp;
	delete []temp.data;

	int len = strlen(this->data);
	temp.data = new char[len+1];

	strcpy(temp.data,this->data);

	int len1 = len+ strlen(str.data);
	delete []this->data;
	this->data = new char[len1+1];
	strcpy(this->data,temp.data);
	strcat(this->data,str.data);
	return *this;
}


char MyString::operator[](const int& index)
{
	return this->data[index];
}


ostream& operator<<(ostream& output,const MyString& str)
{
	output << str.data;
	return output;
}


istream& operator>>(istream& input,const MyString& str)
{
	input >> str.data;
	return input;
}

