#ifndef _ENGINE_H_
#define _ENGINE_H_
#include <iostream>
using namespace std;

class Engine
{
public:
	void addOil();
	void boostUp();
};

class DirverSystem:protected Engine
{
	

};

class Car:public DirverSystem
{
//private:
//	void addOil();
public:
	void boostUp();
};

#endif
