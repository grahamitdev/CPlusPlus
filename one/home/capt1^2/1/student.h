#ifndef _STUDENT_H_
#define _STUDENT_H_

class Stu{
private:
	char name[20];
	double score;
	char sex;
public:
	void setName(char *name);
	void setScore(double score);
	void setSex(char sex);
	void introduce(void);
};

#endif
