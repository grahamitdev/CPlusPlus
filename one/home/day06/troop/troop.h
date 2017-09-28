#ifndef _TROOP_H_
#define _TROOP_H_

#include <iostream>
#include <string>
using namespace std;

class Troops
{
protected:
	string weapon;
public:
	Troops(const string& weapon);
	virtual void fight();
};

class Army:public Troops
{
public:
	Army(const string& weapon);	
	virtual void fight();
};

class Navy:public Troops
{
public:
	Navy(const string& weapon);
	virtual void fight();
};

class AirForce:public Troops
{
public:
	AirForce(const string& weapon);
	virtual void fight();
};

class Leader
{
public:
	void command(Troops* t);

};

#endif
