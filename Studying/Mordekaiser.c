#include<stdio.h>
void	yaa(int a,int b);//원형함수 
void main()
{
	int a,b;
	printf("정수 2개 입력");
	scanf("%d %d",&a,&b);
	
	yaa(1,10);
}

void	yaa(int a,int b)//함수 실행 
	{
		int sum=0,i;
		for(i=a;i<=b;i++);
		{
		sum=a+b;
		}
		printf(" %d + %d = %d\n",a,b,sum);
	}
