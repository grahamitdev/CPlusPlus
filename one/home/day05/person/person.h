#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>
#include <string>
using namespace std;


/*
	基类与派生类的构造、析构顺序：
	构造顺序：先基类后派生类
	析构顺序：先派生类后基类

*/

class Person
{
private:
	string name;
	int age;
public:
	Person();
	string getName()const;
	void setName(const string& name);

	int getAge()const;
	void setAge(const int& age);

	void introduce()const;
	~Person();
};

class Teacher:public Person
{
public:
	Teacher();
	void teach();
	~Teacher();

};

class Student:public Person
{
public:
	Student();
	void study();
	~Student();

};

#endif
