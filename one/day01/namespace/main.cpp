#include "namespace.h"

void iotek::myPrint()
{
	printf("%d Hello world!\n",__LINE__);	
	
}

int main(void)
{

	//第一种访问方法，::是作用域运算符
	iotek::myPrint();
	//第二种访问方法：
	{
		using namespace iotek;
		myPrint();
	}
	myPrint();
	//第三种访问方法
	{
		using iotek::myPrint;
		myPrint();
	}
	zhizuobiao::myPrint();
	return 0;
}
