#include<stdio.h>

void main()
{
	input();
}
void input()

{

	int sec,h,m,s;
	printf("���� �Է��ϼ���");
	scanf("%d",&sec);
	h=sec/3600;
	sec=sec-h*3600;
	m=sec/60;
	sec=sec-m*60;
	s=sec;
	printf("%d �� = %d �ð� %d �� %d �� \n",sec,h,m,s);
	
}

