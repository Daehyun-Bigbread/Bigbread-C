#include<stdio.h>
#include<string.h>
void main()
{
	char name[10],ju[10],*ff,sb[10];
	printf("�̸��� �Է��ϼ���");
	scanf("%s",name);
	fflush(stdin);
	printf("�ֹι�ȣ 7�ڸ��� �Է��ϼ���");
	scanf("%s",ju);
	strncpy(sb,ju,1);
	if(sb=='1'|| sb=='3')
	ff="����";
	else
	ff="����";
	printf("�̸� = %s\n",name);
	printf("�ֹ� = %s\n",ju);
	printf("���� = %s\n",ff);	 
}
