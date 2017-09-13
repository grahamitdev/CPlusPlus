#include "namespace.h"
#include <iostream>
#include <iomanip>
using namespace std;//全局的限定

void iotek::myPrint(void)
{
	cout << "i hello world" << endl;//流提取符
	//c++中\n不刷新流
	//c++中endl刷新流
}
void iotek::myScanf(void)
{
	double num;
	cin >> num;
	cout << setprecision(2) << num << endl;
}


void zhizuobiao::myPrint(void)
{
	cout << "z hello world" << endl;//endofline
}
