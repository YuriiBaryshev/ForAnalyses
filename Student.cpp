#include "StdAfx.h"
#include "Student.h"

CStudent::CStudent()
{
	courage = 0;
	timeOfWaiting = 0;
	name = "Unknown";
}

CStudent::CStudent(short initialCourage)
{
	courage = initialCourage;
	timeOfWaiting = 0;
	name = "Unknown";
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

bool CStudent::GetStatus(discipline course, int labNumber)
{
	return isPassed[course][labNumber];
}

void CStudent::PassingTheLab(discipline course, int labNumber)
{
	isPassed[course][labNumber] = true;
}

void CStudent::SetName(char newName[])
{
	name = newName;
}

void CStudent::SetCourage(short newCourage)
{
	courage = newCourage;
}
