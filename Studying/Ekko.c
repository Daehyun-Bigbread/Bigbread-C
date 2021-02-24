#include<stdio.h>

void main()
{
	int i,j,s,k=0,a[5][5]={0};
	//입력 
	for(s=0;s<=8;s++)
	{
		for(i=0;i<=4;i++)
		{
			for(j=0;j<=4;j++)
			{
				{
					if(i+j==s)
					{
						k=k+1;
						a[i][j]=k;
					}
				}
			
			}
		
		}
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
	}//열의 종료
	
}//행의 종료 


