#pragma once

#include "StdAfx.h"
#include "Student.h"

class CTeacher
{
public:
	CTeacher(void);
public:
	~CTeacher(void);
	void Potala(CStudent *st, discipline d, int labNumber);
	void SetDiscipline(discipline d);
	discipline GetDiscipline();
	
private :
	short randNumber;
	discipline current;
};
