#include "Animal.h"


Cat::Cat(const int& weight)
	:weight(weight)
{
	
}

Dog::Dog(const int& weight)
	:weight(weight)
{


}

void sumWeight(const Cat& cat,const Dog& dog)
{
	cout << cat.weight+dog.weight<<endl;
}

