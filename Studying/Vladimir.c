#include <stdio.h>
int a;
void main()
{
	 a=40;
	printf("메인함수 a= %d\n",a);
	sub(3);
}
void sub(int n)
{
	int i,a;
	a=a+20;
		for(i=1;i<=n;i++)
	{
		printf("서브함수 a= %d\n",a);
	}
}
