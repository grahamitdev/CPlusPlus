#include "animal.h"


int main(void)
{
	Animal animal("小黑");
	animal.setName("金刚");
	animal.introduce();
	cout << "========"<< endl;
	Cat cat("小白");
	cat.setName("伽菲");
	cat.introduce();

	return 0;
}
