#ifndef _SINGLE_TONE_H_
#define _SINGLE_TONE_H_
class SingleTone
{
private:
	SingleTone();//私有
	static SingleTone *instance;//共享
public:
	static SingleTone *getInstance();
};

#endif
