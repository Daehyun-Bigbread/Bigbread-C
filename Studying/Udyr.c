#include<stdio.h>
#include<string.h>
void input(char ir[10]);

void main()
{
	char name[10];
	input(name);
	printf("이름은 %s 입니다\n",name);
}

void input(char ir[10])
{
	printf("이름을 입력하세요");
	scanf("%s",ir);
	
}
