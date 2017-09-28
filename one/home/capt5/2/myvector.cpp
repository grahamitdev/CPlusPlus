#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Vector
{
private:
	T *data;//数组首地址
	int size;//数组大小
	int capacity;//数组容量
protected:
public:
	Vector()
		:data(NULL),size(0),capacity(0)	
	{

	}
	~Vector()
	{
		if(data != NULL)
		{
			size = 0;
			capacity = 0;
			delete[] data;
			data = NULL;
		}
	}
	void checkoutCapacity()
	{
		if(size >= capacity)
		{
			int newCapacity = 2 * capacity + 3;
			T *temp = new T[newCapacity];
			if(data != NULL)
			{
				int i = 0;
				for(i = 0;i < size;++i)
				{
					temp[i] = data[i];
				}
				delete[] data;
			}
			data = temp;
			capacity = newCapacity;
		}
	}
	//增
	void push_back(const T &data)
	{
		checkoutCapacity();
		this -> data[size++] = data;
	}
	//删
	void pop_back()
	{
		if(size != 0)
		{
			if(--size == 0)
				delete[] data;
		}
	}
	//查
	T &operator[](int index)
	{
		return data[index];
	}
};
//Student类
class Stu
{
private:
	string name;
	int id;
protected:
public:
	Stu();
	Stu(const string &name,const int &id);
	Stu(const Stu &stu);//浅拷贝
	string getName(void)const;
	int getId(void)const;
	Stu &operator=(const Stu &stu);
	friend ostream &operator<<(ostream &out,const Stu &stu);
};
Stu::Stu()
{

}
Stu::Stu(const string &name,const int &id)
	:name(name),id(id)
{

}

Stu::Stu(const Stu &stu)
	:name(stu.name),id(stu.id)
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
Stu &Stu::operator=(const Stu &stu)
{
	this -> name = stu.name;
	this -> id = stu.id;
	return *this;
}
ostream &operator<<(ostream &out,const Stu &stu)
{
	out << "姓名:" << stu.name << "," << "学号:" << stu.id;
}

int main(void)
{
	Vector<Stu> stuVector;
	stuVector.push_back(Stu("zhang",1));//增
	stuVector.push_back(Stu("wang",2));
	stuVector.pop_back();//删
	stuVector[0] = Stu("walter",6);//改
	cout << stuVector[0] << endl;//查

	return 0;
}
