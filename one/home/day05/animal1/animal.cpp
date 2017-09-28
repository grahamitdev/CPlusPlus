#include "animal.h"

Animal::Animal(const string& name)
		:name(name)
{
	
}

string Animal::getName()const
{
	return name;
}

void Animal::introduce()const
{
	cout << "name:" << name << endl;
}

Cat::Cat(const string& name,const string& colour)
	:Animal(name),colour(colour)
{
	
}

void Cat::introduce()const
{
	//派生类中可以通过基类的类名来访问基类中被隐藏的函数
	Animal::introduce();	
	//共有继承，基类中的私有成员被隐藏不能直接访问
//	cout << "name:" << getName() <<endl;
	cout << "colour:" <<colour<<endl;
}
