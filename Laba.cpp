#include "StdAfx.h"
#include "Laba.h"

CLaba::CLaba(void)
: n(0)
{

}

CLaba::~CLaba(void)
{
}
discipline CLaba::GetDiscipline()
{
	return current;
}
void CLaba::SetDiscipline(discipline d)
{
	current=d;
}
void CLaba::SetTeacher(CTeacher SomeTeacher)
{
	ZIPotalenko=SomeTeacher;
}

int CLaba::SetGroup(CStudent  gr[], int quantity)
{
	int i;
	for(i=0; i<n; i++)
	{
		group[i]=gr[i];
	}
	n=quantity;
	return 0;
}

void CLaba::Pair(int l)
{
	int time, i, queue, someVar;
	CStudent buf;
	for(time=0;time<45;time++)
	{
		if((time+group[i].courage)%10==0)
		{
			ZIPotalenko.Potala(&group[i], current, l);
			if(group[i].GetStatus(current,l))
			{
				i++;
			}
			else
			{
				buf=group[i];
				for(int j=0; j<(n-1); j++)
				{
					group[j]=group[j+1];
				}
				group[n-1]=buf;
			}
		}

		someVar=0;

		for(j=0;j<(i+1+queue);j++)
		{
			someVar+=group[j].GetCurrentCourage();
		}

		if(time>someVar)
		{
			queue++;
		}

		for(j=i;j<(i+1+queue);j++)
		{
			group[j].Wait();
		}


	}
	int sumWaiting=0, averegeWaiting=0;
	for(i=0;i<n;i++)
	{
		sumWaiting+=group[i].GetTime();
	}
	averegeWaiting=sumWaiting/n;

}
