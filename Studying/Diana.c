#include<stdio.h>

void main()
{
	int a,b,i,j,max,min;
	printf("�������� �Է��ϼ���");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
	for(i=min;i<=max;i++)
	{
		for(j=1;j<=9;j++)
		{
			printf("%d * %d =%d\n",i,j,i*j);
		}
	}
}
