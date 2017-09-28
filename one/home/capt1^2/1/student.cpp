#include "student.h"
#include <cstring>
#include <iostream>

using namespace std;

void Stu::setName(char *name)
{
	strncpy(this -> name,name,20);
}
void Stu::setScore(double score)
{
	this -> score = score;
}
void Stu::setSex(char sex)
{
	this -> sex = sex;
}
void Stu::introduce(void)
{
	cout << "自我介绍:" << endl;
	cout << "姓名：" << name << endl;
	cout << "成绩：" << score << endl;
	cout << "性别：" << sex << endl;
}

