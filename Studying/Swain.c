#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	int i,j,k;
	for(i=80;i>=10;i=i-10)
	{
		for(j=10;j<=80;j=j+10)
		{
			k=(i+j/10)+(j+i/10);
			if(k==99)
			printf("%d + %d = %d\n",i+j/10,j+i/10,k);
		}
	}
}
