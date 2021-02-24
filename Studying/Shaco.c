#include<stdio.h>

void main()
{
	//배열선언문 
	int a[6]={1,2,3,4,5};
	int i,sum=0;
	//선언된 배열에 자료 입력 
	for(i=0;i<=4;i++)
	{
		if(a[i]% 2==1)//a배열밧이 홀수이면  
		sum+=a[i];//sum=sum+a[i];
	}
	printf(" 합 = %d \n",sum);
}
