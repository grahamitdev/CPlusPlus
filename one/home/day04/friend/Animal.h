#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
using namespace std;

class Dog;//前置声明

class Cat
{
friend void sumWeight(const Cat&,const Dog&);
private:
	int weight;
public:
	Cat(const int&);
};

class Dog
{
friend void sumWeight(const Cat&,const Dog&);
private:
	int weight;
public:
	Dog(const int&);
};


void sumWeight(const Cat&,const Dog&);



#endif
