#include <iostream>
#include <string>
using namespace std;

class Operation
{
private:
protected:
	double numA;
	double numB;
public:
	void setNumA(double);
	void setNumB(double);
	virtual double getResult(void) = 0;
	virtual ~Operation(){}
};

class Plus:public Operation
{
private:
protected:
public:
	double getResult(void);
};
class Sub:public Operation
{
private:
protected:
public:
	double getResult(void);
};
class Mul:public Operation
{
private:
protected:
public:
	double getResult(void);
};
class Div:public Operation
{
private:
protected:
public:
	double getResult(void);
};
class Factory
{
private:
protected:
public:
	Operation *createOper(char);
};

void Operation::setNumA(double numA)
{
	this -> numA = numA;
}
void  Operation::setNumB(double numB)
{
	this -> numB = numB;
}
double Plus::getResult(void)
{
	double result = this -> numA + this -> numB;
	return result;
}
double Sub::getResult(void)
{
	double result = this -> numA - this -> numB;
	return result;
}
double Mul::getResult(void)
{
	double result = (this -> numA) * (this -> numB);
	return result;
}
double Div::getResult(void)
{
	if(this -> numB == 0)
	{
		cout << "被除数不能为0" << endl;
		return -1;
	}
	double result = (this -> numA) / (this -> numB);
	return result;
}
Operation *Factory::createOper(char operation)
{
	Operation *p = NULL; 
	switch(operation)
	{
		case'+':
			p = new Plus();
			break;
		case'-':
			p = new Sub();
			break;
		case'*':
			p = new Mul();
			break;
		case'/':
			p = new Div();
			break;
		default:
			break;
	}
	return p;
}

int main(void)
{
	char operation = 0;
	cout << "输入:";
	cin >> operation;
	Factory factory = Factory();
	Operation *p = factory.createOper(operation);
	p -> setNumA(1);
	p -> setNumB(2);
	cout << p -> getResult() << endl;
	delete p;
	return 0;
}
