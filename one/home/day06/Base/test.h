#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>
using namespace std;

/*
	多继承的构造顺序：先基类后派生类，基类构造顺序：先左后右
*/

class BaseA
{
public:
	BaseA(const int& a);
	int a;
	~BaseA();
};

class BaseB
{
public:
	BaseB(const int &b);
	int b;
	~BaseB();
};

class Derived:public BaseB,public BaseA
{
public:
	Derived(const int& a,const int& b);	
	~Derived();
};

#endif
