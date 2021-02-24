#include<stdio.h>
#include<stdlib.h>

void main()
{
	int k,i,n;
	for(i=0;i<=20;i++)
	{
		k=rand();
		n=k % 6;
		printf("%d\n",n);
	}
}
