//设计单例模式类，即无论创建多少对象，都只有一块内存区域
#include "singleTon.h"



int main(void)
{
	SingleTon *s1 = SingleTon::getInstance();	
	cout << s1 << endl;
	SingleTon *s2 = SingleTon::getInstance();
	cout << s2 << endl;
	SingleTon *s3 = SingleTon::getInstance();	
	cout << s3 << endl;
	delete s3;
	return 0;
}
