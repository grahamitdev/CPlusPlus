#ifndef _STRING_H_
#define _STRING_H_

class StrCmp{
private:
	char string1[20];
	char string2[20];
	char result[40];
public:
	void setString1(char *string1);
	void setString2(char *string2);
	char *strCmp(void);
};

#endif
