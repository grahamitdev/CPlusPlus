#include <iostream>
#include <list>
using namespace std;
bool same(double first,double second)
{
	return ((int)first == (int)second);
}
bool range(double first,double second)
{
	return (second <= 5*first);
}
int main(void)
{
	double nums[10] = 
	{1.1,\
	2.1,2.3,\
	3.1,\
	4.2,4.5,\
	5.5,5.7,\
	6.6,\
	20.1};
	list<double> myList(nums,nums + 10);
	myList.unique(same);
	list<double>::iterator it = myList.begin();
	for(it;it != myList.end();++it)
	{
		cout << *it <<endl;
	}
	cout << "==============" << endl;
	myList.unique(range);
	for(it = myList.begin();it != myList.end();++it)
	{
		cout << *it <<endl;
	}
	return 0;
}
