#include <cstdio>
#include <cstring>



//struct结构体是共有的
//class默认是private私有的

class Person{
//private:修饰的成员只能在成员函数中直接访问，不能通过对象访问
//protect:修饰的成员能在成员函数中直接访问，也能通过对象访问
private:
	int age;
	char name[20];
	char sex;
public:
	void setAge(int age)
	{
		this -> age = age;	
		//walter回传一个this指针到setAge里
		//this指向walter
	}
	void setName(const char *name)
	{
		strncpy(this -> name,name,20);
	}

	void setSex(char sex);

	void introduce(void)
	{
		printf("%d %s %c\n",age,name,sex);
	}
};


void Person::setSex(char sex)
{
	this -> sex = sex;
}

int main(void)
{
	//Person walter;//定义性声明
	Person walter = Person();//默认构造函数
	walter.setAge(10);
	walter.setName("walter");
	walter.setSex('M');
	walter.introduce();
	
	#if 0
	//验证定义性声明
	while(1)
	{
		//Person graham;//定义性声明
		Person graham = Person();
		graham.introduce();
	}
	#endif
	
	
	return 0;
}
