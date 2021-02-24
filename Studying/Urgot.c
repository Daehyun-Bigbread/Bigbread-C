#include<stdio.h>
#include<string.h>
void input(char ir[3][10]);

void main()
{
	int i;
	char name[3][10];
	input(name);
	for(i=0;i<=2;i++)
	{
		printf("이름은 %s 입니다\n",name[i]);
	}	
}

void input(char ir[3][10])
{
	int i;
	for(i=0;i<=2;i++)
	{
		printf("이름을 입력하세요");
		scanf("%s",ir[i]);
	}
}
