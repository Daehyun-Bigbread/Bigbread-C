#include <stdio.h>
#include <conio.h>

void main()
{
	int a,n;
	
	printf("숫자를 입력하세요");
	scanf("%d",&a);
	n=a%2;
	if(n==0);
	{
		printf("입력한 정수 %d은 %s",a,"짝수");
	}
	else
	{
		printf("입력한 정수 %d은 %s",a,"홀수");
	} 
}
