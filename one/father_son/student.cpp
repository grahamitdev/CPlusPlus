#include "student.h"
#include <iostream>
using namespace std;
Student::Student()
{
	cout << "Student::Student()" << endl;
}
Student::Student(int id)
	:id(id)
{
	cout << "Student::Student(int id)" << endl;
}
Student::Student(double weight,double height,int id)
	:Person(weight,height),id(id)
{
	cout << "Student::Student(double weight,double height,int id)" << endl;
}
