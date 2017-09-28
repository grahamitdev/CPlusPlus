#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	string name;
	int age;
protected:
public:
	Human(const string &name,const int &age)
		:name(name),age(age)
	{
		cout<< "Human make" << endl;
	}
	void introduce(void)const
	{
		cout << "Human" << endl;
		cout << name << endl;
		cout << age << endl;
	}
};
class Teach:virtual public Human
{
private:
protected:
public:
	Teach(const string &name,const int &age)
		:Human(name,age)
	{
		cout << "Teach make" << endl;
	}
	void funTeach(void)const
	{
		cout << "funTeach" << endl;
	}
};
class Engineer:virtual public Human
{
private:
	
protected:

public:
	Engineer(const string &name,const int &age)
		:Human(name,age)	
	{
		cout << "Engineer make " << endl;
	}
	void funEngine(void)const
	{
		cout << "funEngine" << endl;
	}	
};

class universeTeach:public Teach,public Engineer
{
private:
protected:
public:
	universeTeach(const string &name,const int &age)
		:Human(name,age),Teach(name,age),Engineer(name,age)
	{
		cout << "universeTeach make" << endl;
		introduce();
	}
};

int main(void)
{
	cout << sizeof(universeTeach) << endl;
	universeTeach universe = universeTeach("walteria;sldkflaksjdflaksdjfahsdfkhaskjdfhalksjdfalksjdfhkasdasdkjf;laskdjflaksdjflasjdflkjasdfhkajsdhfklasjflkasdhflaskdjfa;sljdf;alskdfj;laskdfj;lasjdf;lasdjflfhkl",25);
	cout << sizeof(universe) << endl;
	universe.introduce();
	return 0;
}
