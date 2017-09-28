#ifndef _MYLIST_H
#define _MYLIST_H

#include <iostream>
#include <string>
using namespace std;



template <typename T>
class MyList
{
private:
	typedef struct node
	{
		T data;
		struct node* next;
	}Node;
	Node* head;
public:
	MyList();
	MyList(const MyList& list);
	void insertNode(const T& data);
	void deleteNode(const T& data);
	void updateNode(const T& val,const T& data);
	void* selectNode(const T& data);
	void printNode()const;
	T& operator[](int index);
	~MyList();
};

template <typename T>
MyList<T>::MyList()
{
	head = new Node;
	head->next = NULL;
}

template <typename T>
MyList<T>::MyList(const MyList& list)
{
	head = new Node;
	Node* temp = list.head->next;
	while(temp !=NULL)
	{
		this->insertNode(temp->data);
		temp = temp->next;
	}
	
}

template <typename T>
void MyList<T>::insertNode(const T& data)
{
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;

	Node* tempHead = head;
	while(tempHead->next !=NULL)
	{
		tempHead = tempHead->next;
	}

	tempHead->next = newNode;
	
}

template<typename T>
void MyList<T>::deleteNode(const T& data)
{
	Node* pre = (Node*)selectNode(data);
	if(pre == NULL)
	{
		cout << "不存在这个数据"<< endl;
		return;
	}
	Node* del = pre->next;
	pre->next = del->next;
	delete del;
}

template<typename T>
void* MyList<T>::selectNode(const T& data)
{
	Node* tempHead = head;
	Node* per = head;
	tempHead = tempHead->next;
	while(tempHead !=NULL)
	{
		if(tempHead->data == data)
		{
			return per;
		}
		per = tempHead;
		tempHead = tempHead->next;
	}
	return NULL;
}

template<typename T>
void MyList<T>::updateNode(const T& val,const T& data)
{
	Node *temp = (Node*)selectNode(val);
	if(temp == NULL)
	{
		cout << "没有这个数据，不能修改"<< endl;	
		return;
	}
	temp->next->data = data;
}

template<typename T>
void MyList<T>::printNode()const
{
	Node* tempHead = head;
	tempHead = tempHead->next;
	while(tempHead != NULL)
	{
		cout << tempHead->data << endl;
		tempHead = tempHead->next;
	}
}

template<typename T>
T& MyList<T>::operator[](int index)
{
	int i = -1;
	Node* tempHead = head;
	while(i < index)
	{
		i++;
		tempHead = tempHead->next;
	}
	return tempHead->data;
}

template<typename T>
MyList<T>::~MyList()
{
	Node* del = head->next;
	Node* pre = del;
	while(del != NULL)
	{
		pre = del->next;
		delete del;
		del = pre;
	}
	delete head;
}

#endif
