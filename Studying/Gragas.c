#include<stdio.h>
#include<string.h>

void main()
{
	int a,b,m;
	printf("�� ���� ���Է�");
	scanf("%d %d",&a,&b);
	/*
	if(a>b)
	{
		m=a;
	} 
	else
	{
		m=b;
	}	*/
	
	m=(a>b)? a : b ;
	
	printf("%d �� %d �߿��� ū���� %d\n",a,b,m);
}
