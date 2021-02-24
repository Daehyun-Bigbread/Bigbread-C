#include<stdio.h>
#include<string.h>

void main()
{
	int a,b,m;
	printf("두 정수 를입력");
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
	
	printf("%d 와 %d 중에서 큰수는 %d\n",a,b,m);
}
