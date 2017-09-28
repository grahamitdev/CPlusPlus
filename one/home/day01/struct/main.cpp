#include <cstdio>
#include <cstring>

class Person
{
private:
	int age;
	char name[20];
	char sex;
public:
	void setAge(int age)
	{
		this->age = age;
	}
	void setName(const char* name)
	{
		strncpy(this->name,name,20);
	}
	void setSex(char sex);
	void introduce(void)
	{
		printf("%d,%s,%c\n",age,name,sex);
	}
};

void Person::setSex(char sex)
{
	this->sex = sex;
}


int main(void)
{
	Person p1 = Person();
	p1.setAge(10);
	p1.setName("zhangsan");
	p1.setSex('M');
	printf("==============\n");
	p1.introduce();
	return 0;
}
