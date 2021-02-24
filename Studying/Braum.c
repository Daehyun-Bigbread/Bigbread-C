#include<stdio.h>
int input();
int	total(int k,int a,int m);
double avg(int tt);
char hakJum(double avg);
void main()
{
	int k;
		k=input();
	int e;
		e=input();
	int tt;
		m=input();
		
		total(kor,eng,math);
		double av;
		av=avg(tt);
		char hak;
		hak=hakJum(avg);
		
		output(kor,eng,math,tt,avg,hak);
		
}
int input()
{
	
	int k;
	printf("과목 점수를 입력하세요");
	scanf("%d",&k);
	return k;
}

int	total(int kor,int eng,int math)
	{
		int tt;
		tt=kor+eng+math;
		return tt;
	}
	
double avg(int tt)
	{
		double av;
		av=(double)tt/3;
		return av;
	}
char hakJum(double avg)
	{
		char h;
		if(av>=90)
			h='A0';
		else if(av>=80)
			h='B';
		else if(av>=70)
			h='C';
		else if(av>=60)
			h='D';
		else
			h='F';
		return h;
		
	}
void	output()
{
	
}
