#include<stdio.h>

void main()
{
	int i,j,s=3,e=1,k=0,p,a[5][5]={0};
	
	for(i=0;i<=4;i++)//���� 0~4 ���� �ݺ� 
	{
		if(i<=2)//���� 2�ຸ�� ������ 
		{
			s--;
			e++;
		}
		else
		{
			s++;
			e--;
		}
		for(j=s;j<=e;j++)//���� ������ s ���� �������� e 
		{
			k++;
			a[i][j]=k;
			
		}
	}
	//���
		for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%4d",a[i][j]);
		}
			printf("\n");
	}
}
