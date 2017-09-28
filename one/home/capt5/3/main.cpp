#include <iostream>
#include <string>
using namespace std;
template <typename T>
struct object 
{
	T object;	
};
template <typename T>
struct link
{
	T data;
	struct link *next;
};


template <typename T>
class MyArray
{
private:
	T *head;
	int len;
protected:

public:
	MyArray();
	void insert(T object);
	void erase(T object);
	void modify(T object_old,T object_new);
	T operator[](int index);
};
template <typename T>
MyArray<T>::MyArray()
	:len(0)
{
	head = new T;
	head -> next = NULL;
}
template <typename T>
void MyArray<T>::insert(T object)
{
	T *node = new T;
	node -> data.object = object;
	node -> next = NULL;
	head -> next = node;
	++len;
}
template <typename T>
void MyArray<T>::erase(T object)
{
	T *cursor = head;
	while(cursor -> next != NULL)
	{
		if(cursor -> next -> data.object == object)
		{
			T *node = cursor -> next;
			cursor -> next = node -> next;
			delete(node);
			node  = NULL;
			return;
		}
		cursor = cursor -> next;
	}
	cout << "no such object" << endl;
}
template <typename T>
void MyArray<T>::modify(T object_old,T object_new)
{
	T *cursor = head;
	while(cursor -> next != NULL)
	{
		if(cursor -> next -> data.object = object_old)
		{
			cursor -> next -> data.object = object_new;
			return;
		}
		cursor = cursor -> next;		
	}
	cout << "no such object" << endl;
}
template <typename T>
T MyArray<T>::operator[](int index)
{
	T *cursor = head;
	int count = 0;
	while(cursor -> next != NULL)
	{
		++count;
		if(count == index)
		{
			return cursor -> data.object;
		}
		cursor = cursor -> next;
	}
	cout << "no such object" << endl;
}

class Stu
{
private:
	string name;
	int id;
protected:
public:
	Stu();
	Stu(string name,int id);
	string getName(void);
	int getId(void);
};
Stu::Stu()
{

}
Stu::Stu(string name,int id)
	:name(name),id(id)
{

}
string Stu::getName(void)
{
	return this -> name;
}
int Stu::getId(void)
{
	return this -> id;
}

int main(void)
{
	Stu stu = Stu("zhang",1);
	MyArray<link<object> > stuArray;//创建一个动态学生数组
	stuArray.insert(stu);//插入一个对象元素


	MyArray<int> intArray;//创建一个动态整形数组
	int num = 10;
	intArray.insert(num);//插入一个整形元素

	return 0;
}
