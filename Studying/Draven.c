#include<stdio.h>

void main()
{
	int i,j;
	
	for(i = 0; i<5; i++)
	{
		for(j = 0; j<1+i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
