#include<stdio.h>

void main()
{
	int i,j,s=3,e=1,k=0,p,a[5][5]={0};
	
	for(i=0;i<=4;i++)//행이 0~4 까지 반복 
	{
		if(i<=2)//행이 2행보다 작으면 
		{
			s--;
			e++;
		}
		else
		{
			s++;
			e--;
		}
		for(j=s;j<=e;j++)//열의 시작은 s 열의 마지막은 e 
		{
			k++;
			a[i][j]=k;
			
		}
	}
	//출력
		for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%4d",a[i][j]);
		}
			printf("\n");
	}
}
