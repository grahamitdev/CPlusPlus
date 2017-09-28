#include "troop.h"

Troops::Troops(const string& weapon)
	:weapon(weapon)
{
}

void Troops::fight()
{
	cout <<"Troop:" << weapon <<" attacking..."<< endl;
}

Army::Army(const string& weapon)
	:Troops(weapon)
{

}

void Army::fight()
{
	cout <<"Army:" << weapon <<" attacking..."<< endl;
	
}

Navy::Navy(const string& weapon)
	:Troops(weapon)
{

}

void Navy::fight()
{
	cout <<"Navy:" << weapon <<" attacking..."<< endl;
	
}

AirForce::AirForce(const string& weapon)
	:Troops(weapon)
{

}
void AirForce::fight()
{
	cout <<"AirForce:" << weapon <<" attacking..."<< endl;
	
}


void Leader::command(Troops* t)
{
	t->fight();
}
