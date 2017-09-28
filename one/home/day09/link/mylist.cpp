#include "mylist.h"

int main(void)
{
	MyList<int> list;
	int data;
	while(true)
	{
		cin >> data;
		if(data == 123)
		{
			break;
		}
		list.insertNode(data);
	}
	list.updateNode(2,3);
	list.printNode();
	list.deleteNode(8);
	cout << "=========="<< endl;
	list.printNode();
	cout << list[5] << endl;
	return 0;
}
