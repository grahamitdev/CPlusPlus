#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>
using namespace std;

/*
	多继承的构造顺序：先基类后派生类，基类构造顺序：先左后右
*/

class Base
{
public:
	Base(const int& num);
	int num;
};

class BaseA:virtual public Base
{
public:
	BaseA(const int& num,const int& a);
	int a;
	~BaseA();
};

class BaseB:virtual public Base
{
public:
	BaseB(const int& num,const int &b);
	int b;
	~BaseB();
};

class Derived:public BaseA,public BaseB
{
public:
	Derived(const int& num,const int& a,const int& b);	
	~Derived();
};

#endif
