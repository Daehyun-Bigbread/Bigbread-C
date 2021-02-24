#include<stdio.h>

void main()
{
	input();
}
void input()

{

	int sec,h,m,s;
	printf("수를 입력하세요");
	scanf("%d",&sec);
	h=sec/3600;
	sec=sec-h*3600;
	m=sec/60;
	sec=sec-m*60;
	s=sec;
	printf("%d 초 = %d 시간 %d 분 %d 초 \n",sec,h,m,s);
	
}

