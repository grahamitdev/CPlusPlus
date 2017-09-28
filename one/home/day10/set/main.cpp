#include <iostream>
#include <set>
using namespace std;
class Data
{
private:
	char ch;
	int count;
public:
	Data(const char& ch,const int& count = 1)
		:ch(ch),count(count){}
	void addCount()const
	{
		Data& d = const_cast<Data&>(*this);
		d.count++;
	}
	void introduce()const
	{
		cout << ch << ":" << count << endl;
	}
	bool operator<(const Data& d)const
	{
		return ch < d.ch;
	}
};

int main(void)
{
	set<Data> mySet;
	set<Data>::iterator it;
	pair<set<Data>::iterator,bool> ret;
	string str;
	cout << "please input a string:" << endl;
	cin >> str;
	char ch;
	for(int i = 0;i < str.size();i++)
	{
		ch = str[i];
		Data data(ch);
		ret = mySet.insert(data);
		if(ret.second == false)
		{
			it = ret.first;
			it->addCount();
		}
	}
	for(it = mySet.begin();it != mySet.end();it++)
	{
		it->introduce();
	}

/*
	set<int> mySet;
	pair<set<int>::iterator,bool> ret;
	ret = mySet.insert(1);
	ret = mySet.insert(1);
	if(ret.second == false)
	{
		cout <<*(ret.first)<<"已经存在"<<endl;
	}
	else
	{
		cout << *(ret.first)<< endl;
	}
*/
	return 0;
}
