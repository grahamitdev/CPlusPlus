#include <iostream>
#include <string>
using namespace std;

typedef struct student{
	string name;
	int age;
	string address;
	double score;
}Stu;


int main(void)
{
	Stu stu = {};
	cout << "姓名:";
	cin >> stu.name;
	cout << "年龄:";
	cin >> stu.age;
	cout << "地址:";
	cin >> stu.address;
	cout << "成绩:";
	cin >> stu.score;


	cout << "name:" << stu.name << endl;
	cout << "age:" << stu.age << endl;
	cout << "address:" << stu.address << endl;
	cout << "score" << stu.score << endl;
	

	return 0;
}
