#include <iostream>
#include <string>
using namespace std;

class Engine
{
private:
	double oil;
	bool stat;
protected:

public:
	void refuel(const double &oil)const
	{
		cout << "Engine refuel" << endl;
	}
	void start(const bool &stat)const
	{
		cout << "Engine start" << endl;
	}
};
class Transmiss:protected Engine
{
private:

protected:

public:

};
class Car:public Transmiss
{
private:
	
protected:
	void fun(void)
	{
		cout << "Engine fun" << endl;
	}	
public:
	
	void start(const bool &stat)const
	{
		cout << "Car start" << endl;
		refuel(100);
	}
};

int main(void)
{
	Car car = Car();
	car.start(1);

	return 0;
}
