#include<stdio.h>
#include<math.h>
void sum(int a);
void main()
{
	sum(10);
	sum(100);
}

void sum(int a)
{
	int i,hap=0;
	for(i=1;i<=a;i++);
	{
		hap+=i;
	}
	printf("1부터 %d 까지의 합은 %d\n",a,hap);
}
