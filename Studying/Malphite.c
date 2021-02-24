#include<stdio.h>
void	yaa(int a,int b);//원형함수 
void main()
{
	yaa(20,60);//함수호출 
}

void	yaa(int a,int b)//함수 실행 
	{
		int sum;
		sum=a+b;
		printf(" %d + %d = %d\n",a,b,sum);
	}
