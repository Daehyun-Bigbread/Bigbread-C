#include<stdio.h>
void main()
{
	int i,gu,dan;
	printf("���ϴ� ���� �Է��ϼ���");
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
