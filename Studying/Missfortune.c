#include<stdio.h>
int input();
int process(int x,int y);
void output(int a, int b, int c);
void main()
{
	int a,b,hap;
	a=input();
	b=input();
	hap=process(a,b);
	output(a,b,hap);
}
int input()
{
	printf("¼ö ÀÔ·Â?");
	int a;
	scanf("%d",&a);
	return a; 
}
int process(int x,int y)
{
	int sum=x+y;
	return sum;
}
void output(int a,int b,int c)
{
	printf(" %d + %d = %d\n",a,b,c);
}
