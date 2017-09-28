#include <iostream>
using namespace std;



int main(void)
{
//接收键盘输入的单个字符
/*	char ch;
	cin.get(ch);
	cout << ch << endl;
*/
	char buff[20];
	//输入20个字符，以#结束（回车和空格都不能结束）
//	cin.get(buff,20,'#');
	//最多输入20个字符，以回车结束
	cin.getline(buff,20);
	//最多输入20个字符，以回车结束
//	cin.get(buff,20);
	cout << buff << endl;

//	cin >> buff;
//	cout << buff << endl;
	return 0;
}
