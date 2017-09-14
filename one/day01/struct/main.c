#include <stdio.h>

struct Person
{
	int age;
	char name[20];
	char sex;
	void introduce(void)
	{
		printf("%d,%s,%c\n",age,name,sex);
	}
};


int main(void)
{
	struct Person p1 = {20,"zhangsan",'M'};
	printf("%d,%s,%c\n",p1.age,p1.name,p1.sex);
	return 0;
}
