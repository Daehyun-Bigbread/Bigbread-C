#include<stdio.h>
#include<string.h>
void input(char ir[10]);

void main()
{
	char name[10];
	input(name);
	printf("�̸��� %s �Դϴ�\n",name);
}

void input(char ir[10])
{
	printf("�̸��� �Է��ϼ���");
	scanf("%s",ir);
	
}
