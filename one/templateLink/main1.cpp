#include <iostream>
#include <string>
using namespace std;

template <typename T>
class MyList
{
private:
	typedef struct node//必须写在里面
	{
		T data;
		struct node* next;
	}Node;
	Node *head;//一个对象拥有一个头结点
protected:
public:
	MyList();
	MyList(const MyList &list);
	void insertNode(const T &data);
	void deleteNode(const T &data);
	void updateNode(const T &val,const T &data);
	void *selectPreNode(const T &data);
	void printNode(void)const;
	T &operator[](int index);
	~MyList();
};
template <typename T>
MyList<T>::MyList()
{
	head = new Node;
	head -> next = NULL;
}
template <typename T>
MyList<T>::MyList(const MyList &list)
{
	this -> head = new Node;
	Node *temp = list.head -> next();
	while(temp != NULL)
	{
		this -> insertNode(temp -> data);
		temp = temp -> next;
	}
}

template <typename T>
void MyList<T>::insertNode(const T &data)
{
	Node *newNode = new Node;
	newNode -> data = data;
	newNode -> next = NULL;
	Node *temp = head;
	while(temp -> next != NULL)
	{
		temp = temp -> next;
	}
	temp -> next = newNode;
}


template <typename T>
void MyList<T>::deleteNode(const T &data)
{
	Node *pre = selectPreNode(data);
	if(pre == NULL)
	{
		cout << "no such data" << endl;
		return;
	}
	else
	{
		Node *del = pre -> next;
		pre -> next  = del -> next;
		delete(del);
		del = NULL;
	}
}

template <typename T>
void *MyList<T>::selectPreNode(const T &data)
{
	Node *pre = head;
	while(pre -> next != NULL)
	{
		if(pre -> next -> data == data)
		{
			return (void *)pre;
		}
		pre = pre -> next;
	}
	return NULL;
}

template <typename T>
void MyList<T>::updateNode(const T &val,const T &data)
{
	Node *temp = (Node *)selectNode(val);
	if(temp == NULL)
	{
		cout << "no such data" << endl;
		return;
	}
	temp -> next -> data = data;
}

template <typename T>
void MyList<T>::printNode()const
{
	Node *temp = head;
	temp = temp -> next;
	while(temp != NULL)
	{
		cout << temp -> data << endl;
		//可以直接打印基本数据类型
		//打印类对象需要重载<<
	}
}
template <typename T>
T &MyList<T>::operator[](int index)
{
	int i = 0;
	Node *temp = head;
	while(i < index)
	{
		i++;
		temp = temp -> next;
	}
	return temp -> next -> data;
}

template <typename T>
MyList<T>::~MyList()
{
	Node *del = head -> next;
	Node *pre = del;
	while(del != NULL)
	{
		pre  = del -> next;
		delete del;
		del = pre;
	}
	delete head;
}



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
	return 0;
}
