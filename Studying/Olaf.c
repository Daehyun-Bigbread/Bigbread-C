#include<stdio.h>

void main()
{
	int r=0,i,j,k=0,c=-1,p=1,hs=5,a[5][5]={0};
	//�Է�
	
	while(1)
	{
		for(i=0;i<hs;i++) //���� ���� �Ǵ� ���� 
		{
			k++;
			c=c+p;//���� +1�� ����
			a[r][c]=k;
		}
		hs--;
		if(hs==0)
		break;
		
		for(i=0;i<hs;i++)//���� ���� �Ǵ� ���� 
		{
			k++;
			r=r+p;
			a[r][c]=k;
		}
			p=p*-1;
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
	}
}
