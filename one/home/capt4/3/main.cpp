#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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
void setName(const string &name);
	void setAge(const int &age);
	void setSex(const char &sex);
	string getName(void)const;
	int getAge(void)const;
	char getSex(void)const;
};
//Runnable类
class Runnable
{
private:
protected:
public:
	virtual void run(void) = 0;
	virtual ~Runnable(){}
};
//Athlete类
class Athlete:public Person,public Runnable
{
private:
	double speed;
protected:
public:
	Athlete();
	Athlete(const string &name,const int &age,const char &sex,const double &speed);
	virtual void run(void);
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

Athlete::Athlete()
{

}
Athlete::Athlete(const string &name,const int &age,const char &sex,const double &speed)
	:Person(name,age,sex),Runnable(),speed(speed)
{

}
void Athlete::run(void)
{
	srand(time(NULL));
	this -> speed = rand() % 100;
	cout << "运动员" << endl;
	cout << "姓名:" << this -> getName() << endl;
	cout << "速度:" << this -> speed << endl;
}


int main(void)
{
	Athlete *athlete = new Athlete("zhang",25,'M',0.00);
	Person *person = athlete;
	//person -> run();
	//不可以，因为Person类里没有run方法成员
	Runnable *runnable = athlete;
	runnable -> run();
	//可以，因为Runnable类中,声明了run纯虚函数
	//这个函数，在派生类Athlete类中被重写

	delete athlete;
	athlete = NULL;
	person = NULL;
	runnable = NULL;

	return 0;
}

