#include<stdio.h>
void	yaa(int a,int b);//�����Լ� 
void main()
{
	int a,b;
	printf("���� 2�� �Է�");
	scanf("%d %d",&a,&b);
	
	yaa(1,10);
}

void	yaa(int a,int b)//�Լ� ���� 
	{
		int sum=0,i;
		for(i=a;i<=b;i++);
		{
		sum=a+b;
		}
		printf(" %d + %d = %d\n",a,b,sum);
	}
