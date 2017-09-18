#ifndef _CAR_H_
#define _CAR_H_
#include <string>
using namespace std;//也配合<string>使用！
class Car{
private:
	//char brand[20];
	string brand;//默认16字节堆空间
	double weight;
	int wheel;
public:		
	Car();
	//Constructor
	//函数名和类名相同
	//无返回值
	//用来对对象初始化
	//覆盖系统默认构造函数
	Car(string brand,const double weight,const int wheel);//带参构造函数
	Car(const Car &car);//引用
	//拷贝构造函数
	//当对象里有堆空间时，需要重写拷贝构造函数

	//析构函数
	//函数名和类名相同
	//类名前~
	//无参数，所以析构函数只有一个
	//用来对对象的清理
	//主函数里不需要调用，自动调用
	//FILO//栈
	~Car();


	//存取器
	void setBrand(string brand);
	void setWeight(double weight);
	void setWheel(int Wheel);

	string getBrand(void);
	double getWeight(void);
	int getWheel(void);
};


#endif
