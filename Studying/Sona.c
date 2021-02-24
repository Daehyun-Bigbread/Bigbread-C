#include<stdio.h>

void main()
{
	//배열선언문
	int a[]={12,23,34,45,56,67,78,89,90};
	int i,k=0;
	int len;//배열의 길이 기억 변수
	len=(sizeof(a)/sizeof(a[0]));
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
}
