#include<stdio.h>

void main()
{
	//�迭����
	int a[]={12,23,34,45,56,67,78,89,90};
	int i,k=0;
	int len;//�迭�� ���� ��� ����
	len=(sizeof(a)/sizeof(a[0]));
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
}
