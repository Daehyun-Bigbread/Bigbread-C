#include <stdio.h>
#include<stdarg.h>
int sub(int a,int b);
double sub(double a,double b);
double sub(double a,int b);
double sub(int a,double b);

int main()
{
	sub(12,67);
	sub(5.5,6.8);
	sub(34,5.8);
	sub(3.7,88);
	return 0;
}

int sub(int a,int b)
{
	printf("%d + %d = %d\n",a,b,a+b);
	return 0;
}

double sub(double a,double b)
{
	printf("%5.2f + %5.2f = %5.2f\n",a,b,a+b);
	return 0;
}
double sub(double a,int b)
{
	printf("%5.2f + %d = %5.2f\n",a,b,a+b);
	return 0;
}
double sub(int a,double b)
{
	printf("%d + %5.2f = %5.2f\n",a,b,a+b);
	return 0;
}

