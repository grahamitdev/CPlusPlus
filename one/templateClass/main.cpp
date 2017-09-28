#include <iostream>
#include <string>
using namespace std;

template <typename T>//类模板可以放在头文件中声明
class MyArray
{
private:
	T data[20];
	int len;
public:
	MyArray();
	T indexof(int index);
	//也在类体里定义模板函数
	//类模板声明放在头文件里
	void addValue(T value)
	{
		data[len] = value;
		len++;
	}
};
template <typename T>//类模板的成员函数定义
MyArray<T>::MyArray()
	:len(0)
{

}

template <typename T>//不可省略，否则编译报错
T MyArray<T>::indexof(int index)
{
	return data[index];
}

template <>
class MyArray<double>//把模板类特化为只为double服务
{
	public:
		MyArray();
};
MyArray<double>::MyArray()
{
	cout << "MyArray<double>::MyArray()" << endl;
}
int main(void)
{
	MyArray<double> arr;

	return 0;
}

