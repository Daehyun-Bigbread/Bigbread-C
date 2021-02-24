#include<stdio.h>
#include<string.h>
void callname(char (*ir)[10]);
void main()
{
	char name[5][10];
	callname(name);
}
void callname(char (*ir)[10])
{
	int i,ks=0; 
	char sung[2];
	for(i=0;i<=10;i++)
	{
		printf("이름을 입력하세요");
		scanf("%s",ir[i]); 
	}
	printf("검색대상의 이름을 입력하세요");
	scanf("%s",sung);
	for(i=0;i<=10;i++)
	{
		if(strncmp(ir[i],sung,2)==0)
		{
			ks++; 
			printf(" 찾는이름 = %s\n",ir[i]);
		}
	}
	if(ks==0)
	printf("%s 이란 이름은 없는 이름입니다\n",sung);
}
