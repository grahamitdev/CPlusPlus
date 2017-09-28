#include "animal.h"

int main(void)
{
	Cat cat("xiaohuang","yellow");
//	cat.introduce();
	//可以通过下面这种方法访问基类的同名函数
	cat.Animal::introduce();
	cout << "======"<< endl;
	Animal animal("xiaohei");
	animal.introduce();
	return 0;
}
