#include<stdio.h>

void main()
{
	int i,j,k,a[4][4]={0};
	//�Է� 
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			k=k+1;
			a[i][j]=k;
		}
	}
	//ó��
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			a[i][3]=a[i][3]+a[i][j];//���� ��
			a[3][j]=a[3][j]+a[i][j];//������ 
			a[3][3]=a[3][3]+a[i][j];//��ü�� �� 
			 
		}
	}

	
	//���
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%4d",a[i][j]);
		}
			printf("\n");
	}//���� ����
	
}//���� ���� 


