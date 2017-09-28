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
	void setName(const string& name);
	void introduce()const;
	string getName()const;
};

class Cat:public Animal
{
public:
	Cat(const string& name);
	void eatFish();
};
#endif
