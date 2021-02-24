#include<stdio.h>
#include<string.h>
void input(char ir[3][10]);

void main()
{
	int i;
	char name[3][10];
	printf("name[0][0]의 주소 = %d \n",&name[0][0]);
	printf("name[1][0]의 주소 = %d \n",&name[0][0]);
	input(name);
	for(i=0;i<=2;i++)
	{
		printf("이름은 %s 입니다\n",name[i]);
	}	
}

void input(char ir[][10])
{
	printf("ir[0][0]의 주소 = %d \n",&ir[0][0]);
	printf("ir[1][0]의 주소 = %d \n",&ir[0][0]);
	int i;
	for(i=0;i<=2;i++)
	{
		printf("이름을 입력하세요");
		scanf("%s",ir[i]);
	}
}
