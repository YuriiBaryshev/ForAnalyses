#pragma once

#include "StdAfx.h"
#include "Student.h"

class CTeacher
{
public:
	CTeacher();
	~CTeacher();
	
	void SetDiscipline(discipline course);
	discipline GetDiscipline();
	
	void AcceptLab(CStudent *student, discipline currentCourse, int labNumber);
	
private:
	short randNumber;
	discipline course;
};
