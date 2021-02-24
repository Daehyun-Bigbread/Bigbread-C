#include <stdio.h>
#include <string.h>

	int leap_year(int year)
	{
	int answer = 0;
	if (year % 400 == 0)
		answer = 1; //?ㅻ뀈?대㈃ 1
	else if (year % 100 == 0)
		answer = 0; //?ㅻ뀈?꾨땲硫?0
	else if (year % 4 == 0)
		answer = 1; //?ㅻ뀈?대㈃ 1
	return answer;
	}

int main()
{
	int dd, mm, yy, n_day;
	int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

	char week[7][4];  // string week[7]  week[0] = "Sun".....
	
	strcpy(week[0], "Sun");
	strcpy(week[1], "Mon");
	strcpy(week[2], "Tue");
	strcpy(week[3], "Wed");
	strcpy(week[4], "Thr");
	strcpy(week[5], "Fri");
	strcpy(week[6], "Sat");
	
	scanf("%d %d %d %d",&yy, &mm, &dd, &n_day);
	int a,b,c,d,temp;
	int sum1=0;
	int sum2=0;
	int ww=0;
	
	a=yy;
	b=mm;
	c=dd;
	d=n_day;
	
	temp=month[mm]-dd;

	if(mm==2 && leap_year(yy))
	{
	temp+=1;
	}

	if(n_day>temp)
	{
		n_day-=temp;
		mm++;
		if(mm==13)
		{
			mm=1;
			yy++;
		}
		dd=1;
		
		while(1)
		{
			if(mm==2 && leap_year(yy))
			{
				if (n_day<month[mm]+1)
					break;
					n_day = n_day - month[mm]-1;
					mm++;
			}
			else
			{
			if (n_day<month[mm])
				break;
				n_day-=month[mm];
				mm++;
			}
			if(mm==13)
			{
				mm=1;
				yy++;   
			}
		}
		dd+=n_day-1;
		if (dd==0)
		{
			mm--;
			if(mm==0)
			{
				mm=12;
				yy--;
			}
			if(mm==2 && leap_year(yy))
			dd=month[mm]+1;
			else
			dd=month[mm];
		}
		
		if(mm==2 && leap_year(yy))
		{
			if(dd>month[mm]+1)
			{
				dd-=month[mm]+1;
				mm++;
			}
		}
		else
		{
			if(dd>month[mm])
			{
				dd-=month[mm];
				mm++;
			}
		}
		if(mm==13)
		{
			yy++;
			mm=1;
		}
	}
	else
	{
		dd+=n_day;
	}
	if(a>=2020)
	{
		for (int i = 2019; i<a; i++)
			if(leap_year(i)==1)
			sum1+= 366;
			else if(leap_year(i)==0)
			sum1+= 365;   
	}
	
	if(leap_year(a))
	{
		if(b>=3)
		{
			sum2=1;
			for(int i = 1; i<b; i++)
			{
				sum2+=month[i];
			}
		}
		else
		{
			for(int i=1; i<b; i++)
			{
				sum2 += month[i];
			}
		}
	}
	
	else
	{
		for(int i=1; i<b; i++)
		{
			sum2 +=month[i];
		}
	}
	
	ww = (sum2+sum1+d+c+1)%7;
	printf("%d %d %d\n",yy,mm,dd);
	printf("%s\n",week[ww]);
}
