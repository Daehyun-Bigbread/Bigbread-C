#include<stdio.h>
#include<math.h>
void ppp(int a);
void main()
{
	ppp(65);
}

void ppp(int a)
{
	int i;
	for(i=a;i<=a+25;i++);
	{
		printf("%c ���ڴ� ascii ������ %d �̴�\n",i,i);
	}
}
