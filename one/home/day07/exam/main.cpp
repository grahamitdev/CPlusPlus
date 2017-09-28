#include <iostream>
using namespace std;

class Student
{
public:
	virtual void exam() = 0;
};

class God:public Student
{
public:
	virtual void exam()
	{
		cout << "God exam..." << endl;
	}
};


//学渣
class Loser:public Student
{
private:
	God god;
public:
	Loser(const God& god)
	:god(god){}
	virtual void exam()
	{
		god.exam();
	}
};


int main(void)
{
	God g;
	Loser l(g);
	l.exam();

	return 0;
}


