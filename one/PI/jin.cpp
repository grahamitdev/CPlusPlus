#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main(void)
{
	while(1)
	{
	int i = 0;
	int j = 0;
	for(j = 0;j < 10;j++)
	{
	for(i = j;i < 10;++i)
	{
		cout << setfill(' ') << setw(10 - i) << '*';
		if(i == 0)
		{
			cout << endl;
		}
		if(i != 0)
		{
			cout << setfill('*') << setw(2 * i) << '*' << endl;
		}
	
	}
	usleep(100000);
	system("clear");
	}
	}



	return 0;
}	
