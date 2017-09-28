#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;


int main(void)
{
/*
	cout << M_PI << endl;
	//设置有效数字
	cout << setprecision(2) << M_PI << endl;
	//设置输出字符个数，不够前面补空格，够的话直接原样输出
	cout <<setw(20)<<"helloworld" << endl;
	//同上，但是补的是指定的符号而不是空格
	cout <<setfill('@') <<setw(20)<<"hello" << endl;
*/
/*
	int n;
	cin >> n;
	for(int i = 0; i < n;i++)
	{
		cout << setw(n-i) << setfill(' ') << ' ';
		cout << setfill('*') <<setw(2*i+1)<< '*';
		cout << endl;
	}
*/
/*
	cout << "123" << flush;//刷新缓存
	cout << "1"<< ends;//在结尾插入‘\0’
	cout << endl;
	cout <<unitbuf<<"abc";//及时刷新缓存
	cout <<nounitbuf<<"cdf";//关闭刷新
	cout << endl;
	while(1);
*/
/*
	//以只写方式创建一个文件,并打开
	fstream fs;
	fs.open("demo1.txt",fstream::out|fstream::in|fstream::trunc);
//	fstream fs("demo1.txt",fstream::out|fstream::in|fstream::trunc);
	//判断文件是否打开
	if(!fs.is_open())
	{
		cerr << "error" << endl;
		return 1;
	}
	//向文件中写入数据
//	fs<<"helloworld"<< flush;
	char str[20] = "111111111";
	fs.write(str,sizeof(str));	
	
	char buff[20] = "\0";
	//将字节偏移到开头位置
//	fs.seekg(0,fs.beg);
	fs.seekg(0);
	//从文件中读取数据
	fs.read(buff,sizeof(buff));
//	fs>>buff;
	cout <<sizeof(buff)<<","<<buff << endl;
	fs.close();
*/
	string str("hello kitty!");	
	char buff[20] = "\0";
//	strcpy(buff,str.data());
	strcpy(buff,str.c_str());
	cout << buff << endl;
	

	return 0;
}




