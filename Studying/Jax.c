#include<stdio.h>
#include<string.h>
void callname(char (*ir)[10]);
void main()
{
	char name[5][10];
	callname(name);
}
void callname(char (*ir)[10])
{
	int i,ks=0; 
	char sung[2];
	for(i=0;i<=10;i++)
	{
		printf("�̸��� �Է��ϼ���");
		scanf("%s",ir[i]); 
	}
	printf("�˻������ �̸��� �Է��ϼ���");
	scanf("%s",sung);
	for(i=0;i<=10;i++)
	{
		if(strncmp(ir[i],sung,2)==0)
		{
			ks++; 
			printf(" ã���̸� = %s\n",ir[i]);
		}
	}
	if(ks==0)
	printf("%s �̶� �̸��� ���� �̸��Դϴ�\n",sung);
}
