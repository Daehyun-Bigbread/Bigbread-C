#include<stdio.h>
#include<string.h>
void main()
{
	char name[10],ju[10],*ff,sb[10];
	printf("이름을 입력하세요");
	scanf("%s",name);
	fflush(stdin);
	printf("주민번호 7자리를 입력하세요");
	scanf("%s",ju);
	strncpy(sb,ju,1);
	if(sb=='1'|| sb=='3')
	ff="남자";
	else
	ff="여자";
	printf("이름 = %s\n",name);
	printf("주번 = %s\n",ju);
	printf("성별 = %s\n",ff);	 
}
