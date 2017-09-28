#ifndef _OPERATION_H_
#define _OPERATION_H_

class Operation
{
protected:
	double numA;
	double numB;
public:
	void setNumA(const double&);
	void setNumB(const double&);
	virtual double getResult()=0;
};
#endif
