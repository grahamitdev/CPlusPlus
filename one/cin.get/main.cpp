#include <iostream>

using namespace std;

int main(void)
{	
	#if 0
	char buff1[20];
	cout << cin.get();
	//cin.get()接收键盘一个字符,输出ASCII
	//可用于判断键盘是否有字符输入
	#endif
	
	#if 0
	char ch;
	cin.get(ch);//从键盘获取一个字符赋给ch
	cout << ch << endl;//输出字符
	#endif

	#if 1
	//接收字符串，#结束
	//接收空格回车
	char buff2[20];
	cin.get(buff2,5,'#');
	cout << buff2 << endl;
	cout << cin.get();
	#endif
	
	#if 0
	//接收字符串，回车结束
	//接收空格
	char buff2[20];
	cin.get(buff2,20);
	cout << buff2 << endl;
	cout << cin.get();
	//测试吸收cin.get(buff,size)留下的回车
	#endif

	#if 0
	//接收字符串，#结束
	//接收空格回车
	char buff3[20];
	cin.getline(buff3,5,'#');
	cout << buff3 << endl;
	cout << cin.get();
	#endif

	
	#if 0
	//接收字符串，回车结束
	//接收空格回车
	char buff4[20];
	cin.getline(buff4,20);
	cout << buff4 << endl;
	cout << cin.get();
	//测试cin.getline(buff,size)有没有留下回车
	#endif

	//cin.get(buff,size)和cin.getline(buff,size)的区别
	//cin.get(buff,size)每次读取一整行并把Enter键生成的换行符留在输入队列中，解决方法
	//cin.get(buff,size).get();
	//cin.getline(buff,size)每次读取一整行并把由Enter键生成的换行赋抛弃
	//cin.getline(buff,size,'#');但是，回车会留正输入队列里
	//cin.get()当输入的字符串超长时，不会引起cin函数的错误，后面的cin操作会继续执行
	//cin.getline()当输入的字符串超长时，会引起后面的cin函数出错
	return 0;
}
