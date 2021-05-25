#pragma once

enum discipline {InformationalTechnologies=0, ProgrammingTechnologies=1, Physics=2, Math=3};

class CStudent
{
public:
	CStudent();
	CStudent(short initialCourage);
	~CStudent();
		
	void SetCourage(short newCourage);
	int GetCourage();
	
	void SetName(char newName[]);
	char* GetName();
	
	int GetTime();
	void Wait();
	
	bool GetStatus(discipline course, int labNumber);
	void PassingTheLab(discipline course, int labNumber);
	
private:
	long timeOfWaiting;
	char *name;
	bool isPassed[12][32];
	short courage;
};
