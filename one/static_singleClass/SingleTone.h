#ifndef _SINGLE_TONE_H_
#define _SINGLE_TONE_H_
class SingleTone
{
private:
	SingleTone();//私有构造函数
	static SingleTone *instance;
	//构造函数返回的是给对象申请到的地址
	//声明一个静态的类指针接收构造函数的返回值
	//对象调用公开的静态函数来获取这个静态的类指针
	//
public:
	static SingleTone *getInstance();
	//给对象开个后门
	//
	//~SingleTone();
	//析构函数不能直接写在private里
	//不然最后对象无法调用析构函数释放自己
	~SingleTone();
};

#endif
