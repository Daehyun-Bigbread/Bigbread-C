#include<stdio.h>

void main()
{
	int r=0,i,j,k=0,c=-1,p=1,hs=5,a[5][5]={0};
	//입력
	
	while(1)
	{
		for(i=0;i<hs;i++) //열의 증가 또는 감소 
		{
			k++;
			c=c+p;//열이 +1씩 증가
			a[r][c]=k;
		}
		hs--;
		if(hs==0)
		break;
		
		for(i=0;i<hs;i++)//행이 증가 또는 감소 
		{
			k++;
			r=r+p;
			a[r][c]=k;
		}
			p=p*-1;
	}
	//처리
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
