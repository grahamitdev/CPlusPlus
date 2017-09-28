#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include <iostream>
using namespace std;

/*
	1.将构造函数私有化
	2.创建静态的成员函数来调用私有的构造函数，返回值instance为使用构造函数创建出来的内存空间首地址
	3.为了保证静态成员函数只能访问静态成员变量的规则，所以要将instance声明为静态的
	4.为了使整个程序只能调用一次构造函数，需要加入判断（instanc == NULL）

*/

class SingleTon
{
public:
	static SingleTon* getInstance();	
	~SingleTon();
private:
	SingleTon();
	static SingleTon* instance;
};
#endif
