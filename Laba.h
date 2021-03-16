#pragma once

#include "Teacher.h"

class CLaba
{
public:
	CLaba(void);
public:
	~CLaba(void);
		void Potala(CStudent *st, discipline d, int labNumber);
	void SetDiscipline(discipline d);
	discipline GetDiscipline();

private :
	CTeacher ZIPotalenko;
	CStudent group[24];
	discipline current;
	int waiting;
	void SetTeacher(CTeacher SomeTeacher);
private:
	int n;
	int SetGroup(CStudent  gr[], int quantity);
	void Pair(int l);
};
