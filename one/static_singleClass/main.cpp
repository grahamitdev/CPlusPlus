#include "SingleTone.h"
#include <stdio.h>

int main(void)
{
	SingleTone *instance1 = SingleTone::getInstance();
	printf("instance:%p\n",instance1);
	SingleTone *instance2 = SingleTone::getInstance();
	printf("instance:%p\n",instance2);
	SingleTone *instance3 = SingleTone::getInstance();
	printf("instance:%p\n",instance3);
	delete instance3;	
	return 0;
}
