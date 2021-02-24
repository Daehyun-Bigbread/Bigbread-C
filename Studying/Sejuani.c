#include<stdio.h>

void main()
{
	//배열선언문 
	int a[6];
	int i,k=0;
	//선언된 배열에 자료 입력 
	for(i=0;i<=4;i++)
	{
		k++;
		a[i]=k*10; 
	}
	//합을 구하는 과정 
	for(i=0;i<=4;i++)
	{
		a[5]=a[5]+a[i];
	}
	//출력하는 과정
	for(i=0;i<=5;i++)
	{
	printf(" 합 = %d \t",a[i]);
	}
}
