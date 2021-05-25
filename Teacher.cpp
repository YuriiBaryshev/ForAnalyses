#include "StdAfx.h"
#include "Teacher.h"
#include <math.h>

CTeacher::CTeacher()
{
	randNumber = 1;
}

CTeacher::~CTeacher()
{
	
}

void CTeacher::AcceptLab(CStudent *student, discipline currentCourse, int labNumber)
{
	randNumber = (3 * randNumber + 7) % 11;
	if((randNumber & 0x0001) == 0x0001)
	{
		student->PassingTheLab(currentCourse, labNumber);
	}

}

void CTeacher::SetDiscipline(discipline newCourse)
{
	course = newCourse;
}

discipline CTeacher::GetDiscipline()
{
	return course;
}
