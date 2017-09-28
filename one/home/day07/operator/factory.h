#ifndef _FACTORY_H
#define _FACTORY_H
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"


class Factory
{
private:
	Operation* p;
public:
	Operation* createOper(char);
	~Factory()
	{
		delete p;
	}
};
#endif

