#include <iostream>
#include <stdlib.h>
using namespace std;


int main(void)
{
/*
	int* p = (int*)malloc(10*sizeof(int));
	free(p);
*/
/*	int* p = new int;
	delete p;*/
	//与malloc free的区别：
	//1.new delete是运算符，而malloc、free是C语言库函数
	//2.new会调用构造函数，delete调用析构函数。而malloc和free不会
	int* p1 = new int[10];
	delete []p1;
	return 0;
}
