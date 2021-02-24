#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void main()
{
	int k,i,n;
	srand((int) time(NULL));
	for(i=0;i<=5;i++)
	{
		k=rand();
		
		n=k % 45;
		n=n+1;
		printf("%d\n",n);
	}
}
