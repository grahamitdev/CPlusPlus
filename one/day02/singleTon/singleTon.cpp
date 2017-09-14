#include "singleTon.h"

SingleTon* SingleTon::instance = NULL;

SingleTon* SingleTon::getInstance()
{
	//判断是否是第一次申请空间，如果为NULL说明是第一次，如果不为NULL说明之前已经申请过堆空间了，不需要再次申请
	if(instance == NULL)
	{
		//在堆上申请空间
		instance = new SingleTon;
	}
	return instance;
}

SingleTon::SingleTon()
{
}


SingleTon::~SingleTon()
{
	cout << "dis Constructor..."<< endl;
}
