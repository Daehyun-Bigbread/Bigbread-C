#include<stdio.h>
#include<string.h>
callname(char ir[][10]);
void main()
{
	char name[5][10];
	callname(name);
}
callname(char ir[][10])
{
	int i;
	char sung[2];
	for(i=0;i<=4;i++)
	{
		printf("�̸��� �Է��ϼ���");
		scanf("%s",ir[i]); 
	}
	printf("���ϴ� ���� �Է��ϼ���");
	scanf("%s",sung);
	for(i=0;i<=4;i++)
	{
		if(strncmp(ir[i],sung,2)==0)
		printf(" �̸� = %s\n",ir[i]);
	}
}
