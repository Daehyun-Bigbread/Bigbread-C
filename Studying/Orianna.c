#include<stdio.h>

void main()
{
	int so;
	printf("원하는 행열을 입력하세요");
	scanf("%d",&s);
	
	int r=2,i,j,c=0,k,a[5][5]={0};
	//압력 
	for(k=1;k<=s*s;k++)
	{
		a[r][c]=k;
		if(k % 5 ==0)
		{ c++;  }
		else
		{
			r--;
			c--;
			if(r<0)
				r=4;
			if(c<0)
			c=4;
		}
	}
		for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%4d",a[i][j]);
		}
			printf("\n");
	}
}
