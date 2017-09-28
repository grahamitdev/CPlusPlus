#include "factory.h"
#include <iostream>


Operation* Factory::createOper(char ch)
{
	p = NULL;
	switch(ch)
	{
		case '+':
			p = new Add();
			break;
		case '-':
			p = new Sub();
			break;
		case '*':
			p = new Mul();
			break;
		case '/':
			break;
		default:
			break;
	}
	return p;	
}
