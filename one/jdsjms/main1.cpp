#include <iostream>
#include <string>
using namespace std;

class Cand
{
private:
protected:
public:
	virtual void exam(void) = 0;
};
class God:public Cand
{
private:
protected:
public:
	void exam(void)
	{
		cout << "学霸正在考试" << endl;
	}
};
class Slack:public Cand
{
private:
	Cand cand;
protected:
public:
	void exam(void)
	{
		cout << "学渣正在玩" << endl;
	}
};

class Factory
{
private:
protected:
public:
	Cand *jiexi(string stu);
};
Cand *jiexi(string stu)
{
	Cand *p = NULL;
	if(stu == "学渣")
	{
		
		p = new God();
	}
	else
	{
		p = new God();
	}
	return p;
}

int main(void)
{
	Cand *p = jiexi("学渣");
	p -> exam();

	

	return 0;
}
