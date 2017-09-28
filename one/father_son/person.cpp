#include "person.h"
#include <iostream>
using namespace std;
Person::Person()
{
	cout << "Person::Person()" << endl;
}
Person::Person(double weight,double height)
	:weight(weight),height(height)	
{
	cout << "Person::Person(double weight,double height)" << endl;
}
