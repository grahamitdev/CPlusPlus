#ifndef _POW_H_
#define _POW_H_

class Pow{
private:
	int x;
	int y;
	int result_int;
	double result_double;
public:
	Pow();
	Pow(int x,int y);
	Pow(double x,int y);
	double getResult();
};

#endif
