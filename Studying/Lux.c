#include<stdio.h>

void main()
{
	int i,j,k;
	
	for(i=0;i<=4;i++)
	{
		for(k=0;k<=4-i;k++)
		{
			printf(" ");
		}
		for(j=4-i;j<=4;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
