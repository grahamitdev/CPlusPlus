#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const int& a,const int& b)
{
	return a > b;
}


int main(void)
{
	vector<int> vec(10);
	vector<int>::iterator it;
	for(it = vec.begin();it != vec.end();it++)
	{
		cout << *it << endl;
	}
	cout << "==========" << endl;
/*	int i = 0;
	for(;i < 10;i++)
	{
		vec.push_back(i);
	}
*/
	int i = 0;
	for(it = vec.begin();it != vec.end();it++)
	{
		*it = i;
		i++;
	}
	for(i = 0;i < vec.size();i++)
	{
		//cout << vec[i] << endl;
		cout << vec.at(i) << endl;
	}
	sort(vec.begin(),vec.end(),cmp);
	cout << "========" <<endl;
/*	for(i = 0;i < 10;i++)
	{
		//cout << vec[i] << endl;
		cout << vec.at(i) << endl;
	}
*/
	for(it = vec.begin();it != vec.end();it++)
	{
		cout << *it << endl;
	}
	//插入一个元素到指定位置
	vec.insert(vec.begin()+9,9);
	//插入若干个元素到指定位置
	vec.insert(vec.begin(),5,1);
	//插入另外一个数组的一个范围内的元素
	vector<int> vec1(4,800);
	vec.insert(vec.begin(),vec1.begin(),vec1.begin()+4);
	//插入一个整型数组
	int arr[4] = {1,2,3,4};
	vec.insert(vec.begin(),arr,arr+4);
	
	
	//删除一段数据
	vec.erase(vec.begin()+4,vec.begin()+8);
	//删除1个数据
	vec.erase(vec.begin()+3);

	//修改1个元素
	vec[0] = 1000;
	//将所有==1的修改为1000	
	for(it = vec.begin();it != vec.end();it++)
	{
		if(*it == 1)
		{
			*it = 1000;
		}
	}
	cout << "=======" << endl;
	for(it = vec.begin();it != vec.end();it++)
	{
		cout << *it << endl;
	}
	cout << "==========" <<  endl;	
	vector<int> vec2(arr,arr+4);
	vector<int>::iterator it1;
	for(it1 = vec2.begin();it1 != vec2.end();it1++)
	{
		cout << *it1 << endl;
	}


	return 0;
}
