#include "person.h"

int main(void)
{
/*
	Person* person = new Person();
	person->setName("天使");
	person->setAge(2);
	person->introduce();
	delete person;
	cout << "====="<<endl;
*/
	Teacher* teacher = new Teacher();
	teacher->setName("ZHANGSAN");
	teacher->setAge(30);
	teacher->introduce();
	delete teacher;
	cout << "======="<<endl;
	Student* student = new Student();
	student->setName("Tom");
	student->setAge(20);
	student->introduce();
	delete student;
	return 0;
}
