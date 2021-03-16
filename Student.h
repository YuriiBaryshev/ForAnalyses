#pragma once

enum discipline {InformationalTechnologies=0, ProgrammingTechnologies=1, Physics=2, Math=3};

class CStudent
{
public:
	CStudent(void);
	CStudent(int);
public:
	~CStudent(void);
	int GetTime(void);
	void Wait(void);
	bool GetStatus(discipline, int labNumber);
	void PassingTheLab(discipline, int labNumber);
	void SetCourage(int);
	int GetCurrentCourage();
public :
	long timeOfWaiting;
	char *name;
	bool isPassed[12][32];
	void SetName(char newName[]);
	short courage;
};
