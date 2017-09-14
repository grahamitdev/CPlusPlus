#include "singleTone.h"
#include <iostream>
using namespace std;

singleTone *singleTone::instance = 0;
singleTone::singleTone()
{
	cout << "构造函数被调用" << endl;
}
singleTone::~singleTone()
{
	cout << "析构函数被调用" << endl;
}
singleTone *singleTone::getInstance()
{
	if(instance == NULL)
	{
		instance = new singleTone();
		//new delete是运算符，可以重载
		//与malloc free的区别
		//new delete是运算符，malloc free是标准库函数
		//new调用构造函数，delete调用析构函数，malloc free不会
		//new
		//instance = new singleTone;//如果调用的构造函数是无参的
		//int *p1 = new int;
		//int *p2 = new int[10];//申请40字节
		//delete
		//delete p1;//ok
		//delete []p2;//ok
		//delete p2;//编译可以通过，error
		//delete除了释放new申请的堆空间
		//还会去调用析构函数，释放其他资源
	}
	return instance;
}
