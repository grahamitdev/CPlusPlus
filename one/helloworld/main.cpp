#include "namespace.h"

int main(void)
{
	//一
	//作用域运算符"现点现用"
	iotek::myPrint();


	//二
	//代码块限定"命名空间函数"作用域
	{
		using zhizuobiao::myPrint;
		myPrint();
	}	
	
	//三
	//代码快限定"命名空间"作用域
	{
		using namespace iotek;
		myPrint();
	}

	return 0;
}
