#include <iostream>
#include <string>
using namespace std;

template<typename T>
class MyList
{
private:
	typedef struct node
	{
		T data;
		struct node *next;
	}Node;
	Node *head;
protected:
public:
	MyList();
	MyList(const MyList &o);
	void insertNode(T data);
	void print(void)const;
	~MyList();
	T &operator[](int index);
};
template<typename T>
MyList<T>::MyList()
{
	head = new Node;
	head -> next = NULL;
}
template<typename T>
MyList<T>::MyList(const MyList &o)
{
	if(head == NULL)
	{
		this -> head = o.head;
	}
	else
	{
		delete(this -> head);
		this -> head = o.head;
	}
}

template<typename T>
void MyList<T>::insertNode(T data)
{
	Node *newNode = new Node;
	newNode -> data = data;
	newNode -> next = NULL;
	Node *cursor = head;
	while(cursor -> next != NULL)
	{
		cursor = cursor -> next;
	}
	cursor -> next = newNode;
}
template<typename T>
void MyList<T>::print(void)const
{
	Node *cursor = head;
	while(cursor -> next != NULL)
	{
		cout << cursor -> next -> data << endl;
		cursor = cursor -> next;
	}
}
template<typename T>
MyList<T>::~MyList()
{
	delete(this);
}
template<typename T>
T &MyList<T>::operator[](int index)
{
	Node *cursor = head;
	int count = 0;
	while(cursor -> next != NULL)
	{
		if(count == index)
		{
			return cursor -> next -> data;
		}
		++count;
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
	Stu()
	{

	}
	Stu(string name,int id)
		:name(name),id(id)
	{

	}
	friend ostream &operator<<(ostream &out,const Stu &stu)
	{
		out << "name:"<<stu.name<<",id:"<< stu.id;
		return out;
	}
};



int main(void)
{
	MyList<int> mylist;
	int i = 0;
	for(i = 0;i < 10;++i)
	{
		mylist.insertNode(i);
	}
	for(i = 0;i < 10;++i)
	{
		cout << mylist[i] << endl;
	}
	cout << "+=====================================+" << endl;
	MyList<Stu> stulist;
	Stu stu = Stu("walter",1);
	for(i = 0;i < 6;++i)
	{
		stulist.insertNode(stu);
	}
	for(i = 0;i < 6;++i)
	{
		cout << stulist[i] << endl;
	}

	
	return 0;
}
