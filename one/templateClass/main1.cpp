#include <iostream>
#include <string>
using namespace std;

template <typename T1,typename T2>
class Pair
{
private:
	T1 first;
	T2 second;
public:
	Pair();
};
template <typename T1,typename T2>
Pair<T1,T2>::Pair()
{
	cout << "Pair<T1,T2>::Pare()" << endl;
}
//下面偏特化类
//偏特化T1
template<typename T2>//偏特化类声明//T2不需特化的泛型
class Pair<char,T2>//为char开小灶，T2不需特化的泛型
{
public:
	Pair();
};

template<typename T2>//偏特化不能省略偏特化类的声明
Pair<char,T2>::Pair()
{
	cout << "Pair<char,T2>::Pair()" << endl;
}

int main(void)
{
	Pair<int,char> pair1;
	Pair<char,int> pair2;
}
