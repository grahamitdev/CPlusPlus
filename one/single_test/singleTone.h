#ifndef _SINGLETONE_H_
#define _SINGLETONE_H_

class singleTone{
private:
	singleTone();
	static singleTone *instance;
public:
	static singleTone *getInstance();
	~singleTone();
};

#endif
