
#include<stdio.h>

void main()
{
	int a,c,res;
	char b;
	
	printf("���� �Է��ϼ���");
	scanf("%d %c %d",&a,&b,&c); 
	printf("%d %d %d\n",a,c,res);
	
	if (b=='+')
	{
		res=a+c;
	}
	else if(b=='-')
	{
		res=a-c;
	}
	else if(b=='/')
	{
		res=a%c;
	}
	printf(" %d %c %d = %d\n",a,b,c,res);
	
}
