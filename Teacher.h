#pragma once

#include "StdAfx.h"
#include "Student.h"
//the class became depended from the class CStudent
//it would be better if CTeacher would be independent and function Potala would return the result of success,
//but doesn't emulate the process of lab passing - it is the job of CLaba
class CTeacher
{
public:
	CTeacher(void);
public:
	~CTeacher(void);
	// it should be called "TimeOfWaiting"
	void Potala(CStudent *st, discipline d, int labNumber);
	void SetDiscipline(discipline d);
	discipline GetDiscipline();
	
private :
	short randNumber;
//it's better to call "currentDisciplene" instead of simply "current", because without looking into the declaration of the variale
// it's impossible to determine what this variable stores
	discipline current;
};
