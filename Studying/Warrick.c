#include<stdio.h>
#include<string.h>
void input(char ir[3][10]);

void main()
{
	int i;
	char name[3][10];
	printf("name[0][0]�� �ּ� = %d \n",&name[0][0]);
	printf("name[1][0]�� �ּ� = %d \n",&name[0][0]);
	input(name);
	for(i=0;i<=2;i++)
	{
		printf("�̸��� %s �Դϴ�\n",name[i]);
	}	
}

void input(char ir[][10])
{
	printf("ir[0][0]�� �ּ� = %d \n",&ir[0][0]);
	printf("ir[1][0]�� �ּ� = %d \n",&ir[0][0]);
	int i;
	for(i=0;i<=2;i++)
	{
		printf("�̸��� �Է��ϼ���");
		scanf("%s",ir[i]);
	}
}
