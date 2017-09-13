#include <cstdio>
#include <cstring>



//struct结构体是共有的
//class默认是private私有的

class Person{
//private
//protect
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
	
	while(1)
	{
		Person graham = Person();
		graham.introduce();
	}
	
	
	return 0;
}
