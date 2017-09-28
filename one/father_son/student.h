#ifndef _STUDENT_H_
#define _STUDENT_H_
#include "person.h"
class Student:public Person
{
private:
	int id;
public:
	Student();
	Student(int id);
	Student(double weight,double height,int id);
};
#endif
