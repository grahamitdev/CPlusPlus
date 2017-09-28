#include <iostream>
#include <cmath>
using namespace std;

template <typename b> 
b func(b y,b z)
{
	return y + z;
}

template<>
double func<double,int>(double y,int z)
{
	return y * z;
}
int main(void)
{
	cout << func(2,2) << endl;
	return 0;
}
