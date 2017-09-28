#include "animal.h"

Animal::Animal(const string& name)
	:name(name)
{
}
void Animal::setName(const string& name)
{
	this->name = name;
}
void Animal::introduce()const
{
	cout << "name : " << name << endl;
}
string Animal::getName()const
{
	return name;
}
Cat::Cat(const string& name)
	:Animal(name)
{
}
void Cat::eatFish()
{
	cout << getName() << "eat fish" << endl;
}
