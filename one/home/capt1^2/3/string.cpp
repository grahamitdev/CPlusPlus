#include "string.h"
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

void StrCmp::setString1(char *string1)
{
	strncpy(this -> string1,string1,20);
}
void StrCmp::setString2(char *string2)
{
	strncpy(this -> string2,string2,20);
}
char *StrCmp::strCmp(void)
{
	if(strcmp(this -> string1,this -> string2) == 0)
	{
		sprintf(result,"%s = %s",this -> string1,this -> string2);
	}
	else if(strcmp(this -> string1,this -> string2) > 0)
	{
		sprintf(result,"%s > %s",this -> string1,this -> string2);
	}
	else
	{
		sprintf(result,"%s < %s",this -> string1,this -> string2);
	}
	return result;
}
