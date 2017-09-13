#include "SingleTone.h"
#include <stdio.h>

int main(void)
{
	int i = 10;
	for(i = 0;i < 10;++i)
	{
		SingleTone *instance = SingleTone::getInstance();
		printf("instance:%p\n",instance);
	}

	return 0;
}
