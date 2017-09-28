#include <iostream>
#include <string>
using namespace std;

class Military
{
private:
	int i;
protected:
public:
	virtual void attack(void)
	{
		i = 0;
		cout << "Military attack" <<  i << endl;
	}
	void fun(void)
	{
		cout << "yes" << endl;
	}
	~Military(void)
	{
//		delete this;
	}
};
class Air:public Military
{
private:
	int i;
protected:
public:
	void attack(void)
	{
		i = 1;
		cout << "Air attack" << i << endl;
	}
	~Air(void)
	{
//		delete this;
	}
};
class Army:public Military
{
private:
	int i;
protected:
public:
	void attack(void)
	{
		i = 2;
		cout << "Army attack" << i << endl;
	}
	void funa(void)
	{
		cout << "army yes" << endl;
	}
	~Army(void)
	{
//		delete this;
	}
};
class Navy:public Military
{
private:
	int i;
protected:
public:
	void attack(void)
	{
		i = 3;
		cout << "Navy attack" << i << endl;
	}
	~Navy(void)
	{
//		delete this;
	}
};
class Leader
{
public:
	void command(Army *p)
	{
		p -> attack();
	}
};
int main(void)
{
	Military *m = new Military();
//	Army *army = new Army();
	Leader leader = Leader();
	leader.command(m);
	//leader.command(army);
	return 0;
}
