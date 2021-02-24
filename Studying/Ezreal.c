#include<stdio.h>
void process(int *ap,int k);
void main()
{
	int a=30,b=60
	int *ap=&a;
	a=60;
	printf(" a = %d\n",a);
	printf(" *ap = %d\n,*ap");
	
	ap=&b;
	*ap=99;
	printf(" a = %d\n",a);
	printf(" *ap = %d\n,*ap");
	
}
