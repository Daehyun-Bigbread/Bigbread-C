#include<stdio.h>

void main()
{
	//�迭���� 
	int a[6]={1,2,3,4,5};
	int i,sum=0;
	//����� �迭�� �ڷ� �Է� 
	for(i=0;i<=4;i++)
	{
		if(a[i]% 2==1)//a�迭���� Ȧ���̸�  
		sum+=a[i];//sum=sum+a[i];
	}
	printf(" �� = %d \n",sum);
}
