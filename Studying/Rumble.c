#include<stdio.h>

void main()
{
	int i,j,k;
	
	for(i=0;i<=4;i++)
	{
		for(k=0;k<=i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=4;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
