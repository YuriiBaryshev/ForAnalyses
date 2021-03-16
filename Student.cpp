#include "StdAfx.h"
#include "Student.h"

CStudent::CStudent(void)
{

}

CStudent::CStudent(int c)
{
	courage=c;
}

CStudent::~CStudent(void)
{
}

int CStudent::GetTime(void)
{
	return timeOfWaiting;
}

void CStudent::Wait(void)
{
	timeOfWaiting++;
}

bool CStudent::GetStatus(discipline disciplineName, int labNumber)
{
	return isPassed[disciplineName][labNumber];
}

void CStudent::PassingTheLab(discipline disciplineName, int labNumber)
{
	isPassed[disciplineName][labNumber]=true;
}

void CStudent::SetName(char newName[])
{
	name=newName;
}
void CStudent::SetCourage(int c)
{
	courage=c;
}
