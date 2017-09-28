#ifndef _CAR_H_
#define _CAR_H_
#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
	string	brand;
	double	price;
	int		wheel;
public:
	Car(int wheel = 4);
	string	get_brand(void)const;
	double	get_price(void)const;
	int		get_wheel(void)const;
	void	set_brand(string brand);
	void	set_price(double price);
	void	set_wheel(int wheel);
	inline	void show(void)
	{
		cout << brand << endl;
		cout << price << endl;
		cout << wheel << endl;
	}
};
#endif
