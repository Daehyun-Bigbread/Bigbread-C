#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	int a,b,temp;
	a=10;
	b=30;
	
	printf("a = %d \t b= %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("a = %d \t b= %d\n",a,b);

}
