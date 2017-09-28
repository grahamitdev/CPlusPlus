#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class MyVector
{
private:
	T *head;
	int len;
public:
public:
	MyVector();
	void push_back(T data);//增
	void pop_back();//删
	T operator[](int index);//查
};
template <typename T>
MyVector::MyVector()
{
	data = NULL;
	len = 0;
}
template <typename T>
void MyVector::push_back(T data)
{
	T value = new T(data);
	++len;

}
















class Stu
{
private:
	string name;
	int id;
protected:
public:
	Stu();
	Stu(const string &name,const int &id);
	string getName(void)const;
	int getId(void)const;
	friend ostream &operator<<(ostream &out,const Stu &stu);
};
Stu::Stu()
{

}
Stu::Stu(const string &name,const int &id)
	:name(name),id(id)
{

}
string Stu::getName(void)const
{
	return this -> name;
}
int Stu::getId(void)const
{
	return this -> id;
}
ostream &operator<<(ostream &out,const Stu &stu)
{
	out << "姓名:" << name << "," << "学号:" << id << endl;
}

int main(void)
{
	MyVector<Stu> stuVector;
	//MyVector<Stu>::iterator it;
	stuVector.push_back(Stu("zhang",1));//增
	stuVector.push_back(Stu("wang",2));
	stuVector.pop_back();//删
	stuVector[1] = Stu("walter",6);//改
	cout << stuVector[1] << endl;//查


	return 0;
}
