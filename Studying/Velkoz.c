#include<stdio.h>
#include<math.h>
void main()
{
	char city[20]="Seoul Korea!!";
	printf("���ڿ��� �Է��ϼ���");
	//scanf("%a",city);
	gets(city);
	printf("%s\n ",city);
	
	int i;
	for(i=1;i<=26;i++)
	{
		printf("%c => %d \n",city[i]);
	}
}
