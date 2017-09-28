#include <iostream>
using namespace std;

class Base
{
private:
	int n;
public:
	int getN()const;
};

int Base::getN()const
{
	Base *temp = const_cast<Base*>(this);
	temp->n = 1;
	return this->n;
}


int main(void)
{
	Base a = Base();
	cout << a.getN() << endl;
	return 0;
}
