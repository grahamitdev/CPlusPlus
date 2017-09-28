#include <iostream>
#include <string>
using namespace std;
//前置声明
class Dog;
class Cat{
friend double SumWeight(Cat const &cat,const Dog &dog);
private:
	string name;
	double weight;
public:
	Cat(const string &name,const double &weight);
};
class Dog{
friend double SumWeight(const Cat &cat,const Dog &dog);
private:
	string name;
	double weight;
public:
	Dog(const string &name,const double &weight);

};
Cat::Cat(const string &name,const double &weight)
	:name(name),weight(weight)
{

}

Dog::Dog(const string &name,const double &weight)
	:name(name),weight(weight)
{

}
double SumWeight(const Cat &cat,const Dog &dog)
{
	double sum = cat.weight + dog.weight;
	return sum;
}
int main(void)
{
	Cat cat = Cat("Tom",10);
	Dog dog = Dog("Jarry",20);
	cout << SumWeight(cat,dog) << endl;;

	return 0;
}
