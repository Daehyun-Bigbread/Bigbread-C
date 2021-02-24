#include<stdio.h>
#include<string.h>

void main()
{
	int a,n;
	char st[10];
	
	printf("정수를입력하세요");
	scanf("%d",&a);
	
	n=a % 2;
	if(n==1)
	{
		strcpy(st,"홀수");
	} 
	else
	{
		strcpy(st,"짝수");	
	}
	
	printf(" %d 은 %s\n",a,st);


}
