#include "troop.h"


int main(void)
{
/*
	Troops* troops = new Troops("gun");
	troops->fight();
	delete troops;
	 troops = new Army("99-Tank");
	troops->fight();
	delete troops;
	troops = new Navy("galley");
	troops->fight();
	delete troops;
	troops = new AirForce("J-31");
	troops->fight();
	delete troops;
*/
//	Troops* troops = new Troops("gun");
	Army* army = new Army("99-Tank");
	Navy* navy = new Navy("galley");
	AirForce* airForce =  new AirForce("J-31");
	Leader* leader = new Leader();
//	leader->command(troops);
	leader->command(army);
	leader->command(navy);
	leader->command(airForce);
//	delete troops;
	delete army;
	delete navy;
	delete airForce;
	delete leader;
	return 0;
}
