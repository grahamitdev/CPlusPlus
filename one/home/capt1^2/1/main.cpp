#include "student.h"
#include <iostream>
using namespace std;

int main(void)
{
	char name[20] = "";
	double score = 0.00;
	char sex = 0;
	while(1)
	{
		//声明并定义对象
		Stu stu = Stu();
		cout << "请输入姓名：";
		cin >> name;
		cout << "请输入成绩：";
		cin >> score;
		cout << "青输入性别：";
		cin >> sex;

		stu.setName(name);
		stu.setScore(score);
		stu.setSex(sex);
		cout << "===========\n";
		stu.introduce();
		cout << "===========\n";
	}
	
	return 0;
}
