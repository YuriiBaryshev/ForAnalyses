#include "StdAfx.h"
#include "Teacher.h"
#include "Teacher.h"
#include <math.h>
CTeacher::CTeacher(void)
{
	randNumber=1;
}

CTeacher::~CTeacher(void)
{
}

void CTeacher::Potala(CStudent *st, discipline d, int labNumber)
{
	randNumber=(3*randNumber+7)%11;
	if((randNumber&0x0001)==0x0001)
	{
		st->PassingTheLab(d, labNumber);
	}

}

void CTeacher::SetDiscipline(discipline d)
{
	discipline=d;
}
discipline CTeacher::GetDiscipline()
{
	return discipline;
}
