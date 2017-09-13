#include "SingleTone.h"

SingleTone *SingleTone::instance = 0;

SingleTone::SingleTone()
{

}

SingleTone *SingleTone::getInstance()
{
	if(instance == 0)
	{
		instance = new SingleTone();
	}
	return instance;
}
