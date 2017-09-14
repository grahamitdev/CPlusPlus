#include <iostream>
#include "singleTone.h"
using namespace std;
int main(void)
{
	singleTone *p = NULL;
	int i = 0;
	for(i = 0;i < 5;++i)
	{
		p = singleTone::getInstance();
		cout << "P:" << p << endl;
	}
	delete p;
	p = NULL;

	return 0;
}
