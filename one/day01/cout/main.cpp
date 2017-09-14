#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(void)
{
	
	printf("%s\n","Hello world");
	int i = 5;
	cin >> i;
	cout << "Hello world!" << endl;
	cout << 1 << endl;
	printf("%.2f\n",1.2345);
	//得到3位有效数字
	cout <<setprecision(3)<<1.12345 << endl;
	return 0;
}
