#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string name;
public:
	Animal(const string& name);
	string getName()const;
	void introduce()const;
};

class Cat:public Animal
{
private:
	string colour;
public:
	Cat(const string& name,const string& colour);
	//当派生类的成员函数与基类中的函数同名时，会自动隐藏基类的函数
	void introduce()const;
};

#endif
