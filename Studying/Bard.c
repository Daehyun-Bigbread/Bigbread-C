#include<stdio.h>
double cctom(int a);
void main()
{
	double a;
	a=cctom(185);
	printf(" 185 cm �� m�� ȯ���ϸ� %5.2f\n ",a);	
}

double cctom(int a)
{
	double b;
	b=(double)a/100;
	return b;
}
