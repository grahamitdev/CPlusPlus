#include "person.h"

Person::Person()
{
	cout << "constructor.." << endl;
}

Person::~Person()
{
	cout << "desconstructor..."<<endl;
}

string Person::getName()const
{
	return name;
}

void Person::setName(const string& name)
{
	this->name = name;
}

int Person::getAge()const
{
	return age;
}

void Person::setAge(const int& age)
{
	this->age = age;
}

void Person::introduce()const
{
	cout << "name:"<<name<<endl;
	cout << "age:"<< age <<endl;
}

Teacher::Teacher()
{
	cout << "Teacher()"<<endl;
}
Teacher::~Teacher()
{
	cout << "~Teacher()"<<endl;
}

void Teacher::teach()
{
	cout <<getName()<<" teaching..."<<endl;
}

Student::Student()
{
	cout << "Student()"<<endl;
}
Student::~Student()
{
	cout << "~Student()"<<endl;
}

void Student::study()
{
	cout <<getName()<<" studying..."<<endl;
}


