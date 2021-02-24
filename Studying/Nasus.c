#include<stdio.h>
void main()
{
	int i,gu,dan;
	printf("원하는 구단 입력하세요");
	scanf("%d",&gu);
	//for(i=1;i<=9;i++)//
	i=1;
	do
	{
		dan=gu*i;
		printf("%d * %d = %d\n",gu,i,dan);
		i++;	
	} while(i<=9);
}
