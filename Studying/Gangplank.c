#include<stdio.h>
#include<string.h>

void main()
{
	int a,n;
	char st[10];
	
	printf("�������Է��ϼ���");
	scanf("%d",&a);
	
	n=a % 2;
	if(n==1)
	{
		strcpy(st,"Ȧ��");
	} 
	else
	{
		strcpy(st,"¦��");	
	}
	
	printf(" %d �� %s\n",a,st);


}
