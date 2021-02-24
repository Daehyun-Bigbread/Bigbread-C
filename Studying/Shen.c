#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k;
	char m[]={"Seoul Incheon Busan Gwangju Daeju Ulsan Daejeon Jeju Jeonju Sejong Andong Suwon"};
	k=strlen(m);
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i;j++)
		{
			printf("%c",m[j]);
		}
		printf("\n");
	}
}
