#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
	cout << M_PI << endl;
	//有效数字位数
	cout << setprecision(20) << M_PI << endl;
	//不够前补空格，购的话原样输出
	cout << setw(20) << "hello world" << endl;//20 - 11 = 9
	//同上，前补@
	cout << setfill('@') << setw(20) << "helloworld" << endl;




	//
	return 0;
}
