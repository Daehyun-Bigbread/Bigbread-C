#include<stdio.h>

void main()
{
	//�迭���� 
	int a[6];
	int i,k=0;
	//����� �迭�� �ڷ� �Է� 
	for(i=0;i<=4;i++)
	{
		k++;
		a[i]=k*10; 
	}
	//���� ���ϴ� ���� 
	for(i=0;i<=4;i++)
	{
		a[5]=a[5]+a[i];
	}
	//����ϴ� ����
	for(i=0;i<=5;i++)
	{
	printf(" �� = %d \t",a[i]);
	}
}
