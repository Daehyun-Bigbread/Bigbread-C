#include<stdio.h>
#include<string.h>
void input(char ir[][10]);
void sort(char ir[][10]);

void main()
{
	int i;
	char name[3][10];

	input(name);
	sort(name);//�������� ����
	for(i=0;i<=2;i++) 
	{
		printf("�̸� = %s\n",name[i]);
	}	
}
//�Էºκ� 
void input(char ir[][10])
{
	int i;
	for(i=0;i<=2;i++)
	{
		printf("�̸��� �Է��ϼ���");
		scanf("%s",ir[i]);
	}
	//����
	void sort(char ir[][10])
	{
		int i,j;
		char t[10];
		for(i=0;i<=2-1;i++)
		{
			for(j=i+1;j<=2;j++)
			{
				if(ir[i][0]>ir[j][0])
				{
					strcpy(t,ir[j]);
					strcpy(ir[j],ir[i]);
					strcpy(ir[i],t);
				}
			}
		}
	}
}
