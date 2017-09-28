#include <iostream>
using namespace std;

/*
	在将引用作为函数的参数进行传递时，实质上传递的是实参本身，即传递进来的不是实参的一个拷贝，也没有开辟新的内存空间，所以使用引用传参既可以节约空间也可以节约时间。

*/

void func(int &i)
{
	i++;
	cout <<__LINE__<<&i << "," << *i << endl;
}

int main(void)
{
	int i = 99;
	cout <<__LINE__ <<&i << "," << i << endl;
	func(&i);
	cout <<__LINE__<<&i << "," << i << endl;

	return 0;
}
