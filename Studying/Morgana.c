#include<stdio.h>
int yaa(int a,int b);
void main()
{
	int su;
	su =yaa(20,60);//함수호출 
	printf(" %d + %d = %d\n",20,60,su);
}

int	yaa(int a,int b)//함수 실행 
	{
		int sum;
		sum=a+b;
		return sum;
	}
