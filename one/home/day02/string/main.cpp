#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	if(s1 == s2)
	{
		cout <<s1<<"==" <<s2<<endl; 
	}
	else if(s1 > s2)
	{
		cout << "s1: "<<s1 <<" Max " << endl;
	}
	else
	{
		cout << "s2: " <<s2<<" Max" << endl;
	}
	if(s1.size()==s2.size())
	{
		cout << "s1 size == s2 size" << endl;
	}
	else if(s1.size()>s2.size())
	{
		cout << "s1 long..."<<endl;
	}
	else
	{
		cout << "s2 long..."<<endl;
	}
	int i = 0;
	for(;i < s1.size();i++)
	{
		cout << s1[i] << endl;
	}

	return 0;
}
