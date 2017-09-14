#include "SingleTone.h"
#include <iostream>
using namespace std;

SingleTone *SingleTone::instance = 0;
//静态成员变量
//static 成员变量必须先初始化才能使用，否则链接错误
//static 成员变量的内存空间既不是在声明类时分配，也不是在创建对象时分配，而是在初始化时分配
//静态成员变量必须初始化，而且只能在类体外进行
//因为static成员不属于对象
//！但是对象在调用构造函数时(默认/用到static构造)或者函数里用到static，不会给static成员分配空间，只会去用static成员
//所以先在.h或.cpp(类的外面)里初始化(并附值)static变量,static从这里生效.
//然后再创建对象,就可以放心使用static了
//顺序反过来就报错
//但是如果手写的构造和之后的函数里都没有用到static
//那么就不需要给static初始化，但是没有意义了

//static成员变量定义性声明在类里
//例如：
//static string name;
//static SingleTone *instance;
//static成员变量定义
//例如：
//string Stu::name;
//string stu::name = "walter";
//SingleTone *SingleTone::instance;//初始化
//SingleTone *SingleTone::instance = 0;//初始化并赋值
//static成员变量访问
//例如：
//Stu::name;
//SingleTone::instance;

//可通过类名直接访问static
//可通过对象访问(public)static


//静态成员函数
//静态成员函数没有this指针(关键),而且静态成员函数出现的早
//就算有了对象，静态成员函数还是不能访问非静态成员，因为没有this指针
//不能访问非静态成员，只能访问静态成员
//如果静态成员变量还没有初始化(没有分配空间)
//在.h声明时可以用成员的名字，这时候是形参
//在.cpp定义函数时，要先初始化静态成员变量，这时候是时参
//非静态成员函数可以访问所有成员(静态/非静态)
//静态成员函数定义性声明：static 类型名 名字();
//例如：
//
//定义：返回值类型 类名::名字(){...}
//使用：类名::静态函数名字();

//可通过类名直接访问static
//可通过对象访问(public)static


//单例类
//对象名字可以每次都不一样，但是指向的地址一样
//无论创建多少次对象
//程序从头至尾只能申请到一个且唯一不变的对象指针
//使用static被所有对象共享的特性
//步骤：
//将构造函数私有化
//用本类的指针指向这个私有化的构造函数
//创建静态的成员函数来调用私有的构造函数，返回值为使用构造函数创造出来的内存空间地址
//为了保证静态成员只能访问静态成员的规则，所以将instance声明为静态
//为了使整个程序只能调用一次构造函数，需要加入判断(instance == NULL)

//空类
//没有任何成员变量，但是可以有成员函数
//在创建对象时，占用一个字节的空间

SingleTone::SingleTone()
{
	cout << "构造函数被调用" << endl;
}
SingleTone::~SingleTone()
{
	cout << "析构函数被调用" << endl;
}

SingleTone *SingleTone::getInstance()
{
	if(instance == 0)
	{
		instance = new SingleTone();
	}
	return instance;
}

