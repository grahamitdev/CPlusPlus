#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const int &num1,const int &num2)
{
	return num1 > num2;
}

int main(void)
{
	vector<int> myVector;
	vector<int>::iterator it;
	cout << "**" << sizeof(it) << endl;
	cout << "输入10个数字:";
	int i = 0;
	int num = 0;
	for(i = 0;i < 10;++i)
	{
		myVector.push_back(i);
	}
	sort(myVector.begin(),myVector.end(),cmp);
	cout << "排序后:" << endl;
	for(i = 0;i < 10;++i)
	{
		cout << myVector[i] << endl;
	}
	cout << "==============" << endl;
	it = myVector.begin();
	cout << "*" << *it << endl;
	cout << "**" << sizeof(it) << endl;
	myVector.insert(it,6);
	for(it = myVector.begin();it != myVector.end();++it)
	{
		cout << *it << endl;
	}
	
	return 0;
}
