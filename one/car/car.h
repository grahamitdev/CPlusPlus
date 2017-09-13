#ifndef _CAR_H_
#define _CAR_H_

class Car{
private:
	char brand[20];
	double weight;
	int wheel;
public:		
	char *getBrand(void);
	double getWeight(void);
	int getWheel(void);
	
	void setBrand(const char *Brand);
	void setWeight(double weight);
	void setWheel(int Wheel);
};


#endif
