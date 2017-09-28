#include <iostream>
#include <string>
using namespace std;
//Person类
class Person
{
private:
	string name;
	int age;
	char sex;
protected:
public:
	inline Person();
	inline Person(const string &name,const int &age,const char &sex);
	inline void setName(const string &name);
	inline void setAge(const int &age);
	inline void setSex(const char &sex);
	inline string getName(void)const;
	inline int getAge(void)const;
	inline char getSex(void)const;
	inline friend ostream &operator<<(ostream &output,const Person &p);
};
//Employee类
class Employee:public Person
{
private:
	string position;
protected:
public:
	inline Employee();
	inline Employee(const string &name,const int &age,const char &sex,const string &position);
	inline void setPosition(const string &position);
	inline string getPosition(void)const;
	inline bool operator==(const Employee &employee);
	inline friend ostream &operator<<(ostream &output,const Employee &p);
};

Person::Person()
{

}
Person::Person(const string &name,const int &age,const char &sex)
	:name(name),age(age),sex(sex)
{

}
void Person::setName(const string &name)
{
	this -> name = name;
}
void Person::setAge(const int &age)
{
	this -> age = age;
}
void Person::setSex(const char &sex)
{
	this -> sex = sex;
}
string Person::getName(void)const
{
	return this -> name;
}
int Person::getAge(void)const
{
	return this -> age;
}
char Person::getSex(void)const
{
	return this -> sex;
}
ostream &operator<<(ostream &output,const Person &p)
{
	output << "====================" << endl;
	output << "人类" << endl;
	output << "姓名:" << p.name << endl;
	output << "年龄:" << p.age << endl;
	output << "性别:" << p.sex << endl;
	output << "====================" << endl;
	return output;
}

Employee::Employee()
{

}
Employee::Employee(const string &name,const int &age,const char &sex,const string &position)
	:Person(name,age,sex),position(position)
{

}
void Employee::setPosition(const string &position)
{
	this -> position = position;
}
string Employee::getPosition(void)const
{
	return this -> position;
}
bool Employee::operator==(const Employee &p)
{
	if(this -> getName() == p.getName())
	{
		if(this -> getAge() == p.getAge())
		{
			if(this -> getSex() == p.getSex())
			{
				if(this -> position == p.position)
				{
					return true;
				}
			}
		}
	}
	return false;
}
ostream &operator<<(ostream &output,const Employee &p)
{
	output << "*******************" << endl; 
	output << "工程师" << endl;
	output << "姓名:" << p.getName() << endl;
	output << "年龄:" << p.getAge() << endl;
	output << "性别:" << p.getSex() << endl;
	output << "职位:" << p.getPosition() << endl;
	output << "*******************" << endl;
	return output;
}

int main(void)
{
	Person person = Person("zhang",22,'M');
	cout << person <<endl;
	Employee employee1 = Employee("zhang",22,'M',"manager");
	Employee employee2 = Employee("zhang",22,'M',"manager");
	Employee employee3 = Employee("li",22,'M',"employee");
	if(employee1 == employee2)
	{
		cout << employee1;
	}
	else
	{
		cout << "不是同一个工程师" << endl;
	}
	if(employee1 == employee3)
	{
		cout << employee1;
	}
	else
	{
		cout << "不是同一个工程师" << endl;
	}



	return 0;
}
