#include <iostream>
#include <cstring>
#include <string>
using namespace std;

namespace A{
	char user_name[] = "namespace A";
	void showname(){
		cout << user_name << endl;
	}
}
namespace B{
	char user_name[] = "namespace B";
	void showname(){
		cout << user_name << endl;
	}
}


int main(void)
{
	A::showname();
	B::showname();

	strcpy(A::user_name,"good");
	A::showname();
	return 0;
}
