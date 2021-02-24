#include<stdio.h>
sub (int n);
void main()
{
	sub(3);
}

sub (int n)
{
	if(n==0)
	return 1;
	else
	{
		printf("%d ȫ�浿\n",n);
		return sub(n-1);
	}
}
