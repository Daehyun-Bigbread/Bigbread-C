#include<stdio.h>
void	yaa(int a,int b);//�����Լ� 
void main()
{
	yaa(10,20);//�Լ�ȣ�� 
}

void	yaa(int a,int b)//�Լ� ���� 
	{
		int sum;
		sum=a+b;
		printf(" %d + %d = %d\n",a,b,sum);
	}
