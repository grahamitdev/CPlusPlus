#ifndef _CAR_H_
#define _CAR_H_
#include <string>
using namespace std;
class Car{

private:
	string brand;
	int weight;
private:
	int wheel;
public:
	void introduce();
	Car(const Car &car);
	Car();
};



#endif
