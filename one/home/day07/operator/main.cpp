#include "factory.h"
#include <iostream>
using namespace std;


int main(void)
{
	double numA = 0;
	double numB = 0;
	char ch = '\0';
	cout << "please input numA:" << endl;
	cin >> numA;
	cout << "please input numB:" << endl;
	cin >> numB;
	cout << "please input operator:" << endl;
	cin >> ch;
	Factory f;
	Operation* oper = f.createOper(ch);
	if(oper == NULL)
	{
		cout << "error" << endl;
		return 0;
	}
	else
	{
		oper->setNumA(numA);
		oper->setNumB(numB);
		cout << oper->getResult() << endl;
	}
	return 0;
}



