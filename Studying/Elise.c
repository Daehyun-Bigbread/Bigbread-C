#include<stdio.h>

void main()
{
	int i,j,s,k=25,a[5][5]={0};
	//�Է� 
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			{
				a[i][j]=k;
				k=k-1;		
			}
		}
	}
	//ó��

	//���
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%4d",a[i][j]);
		}
			printf("\n");
	}//���� ����
	
}//���� ���� 
