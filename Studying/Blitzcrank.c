#include <stdio.h>
int a;
void main()
{
	int i;
	for(i=1;i<=3;i++)
	sub(3);
}
void sub(int n)
{
	int i;
static int a=0;
	int b=0;

	
		a=a+20;
		b=b+20;
		printf("서브함수 a= %d\t b= %d\n",a,b);

}
