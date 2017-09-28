#ifndef _NAMESPACE_H_
#define _NAMESPACE_H_
#include <cstdio>
/*
	声明命名空间
	关键字：namespace
	使用花括号限定命名空间的作用域
*/
namespace iotek{
	void myPrint(void);
	
}
//如果存在同名命名空间，会自动合并 
namespace iotek{
	void myPrint1(void)
	{
		printf("hi\n");
	}
}
namespace zhizuobiao{
	void myPrint(void)
	{
		printf("%d Hello world!\n",__LINE__);
	}
	
}

#endif
