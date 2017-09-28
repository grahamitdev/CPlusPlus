#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool numCmp(const double &num1,const double &num2)
{
	return num1>num2;
}

int main(void)
{
	double num = 0;
	vector<double>arr;
	cout << "输入10个数字:";
	int i = 0;
	for(i = 0;i < 10;++i)
	{
		cin >> num;
		arr.push_back(num);
	}
	sort(arr.begin(),arr.end(),numCmp);
	for(i = 0;i < 10;++i)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
