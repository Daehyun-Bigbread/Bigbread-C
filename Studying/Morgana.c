#include<stdio.h>
int yaa(int a,int b);
void main()
{
	int su;
	su =yaa(20,60);//�Լ�ȣ�� 
	printf(" %d + %d = %d\n",20,60,su);
}

int	yaa(int a,int b)//�Լ� ���� 
	{
		int sum;
		sum=a+b;
		return sum;
	}
