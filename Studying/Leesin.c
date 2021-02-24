#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void main()
{
	int k,i,n;
	srand((int) time(NULL));
	{
		k=rand();
		
		n=k % 100;
		n=n+1;
		printf("%d\n",n);
	}
}
