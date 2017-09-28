#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	int i = 10;
protected:
	int j = 10;
public:
	int k = 10;
	void fun(void)
	{
		cout << "base fun" << endl;
	}
	void funp(void)
	{
	}
};
class Mammal: virtual public  Animal
{
private:

protected:

public:

};
class Pet: virtual public  Animal
{
private:

protected:

public:

};

class Cat:public Mammal,public Pet
{
private:

protected:

public:

};

int main(void)
{
	Cat cat = Cat();
	cout << sizeof(Pet) << endl;
	cout << cat.k << endl;

	return 0;
}
