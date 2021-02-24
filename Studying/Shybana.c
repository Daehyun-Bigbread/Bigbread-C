#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	int i,j,k;
	char m[]={"Seoul Incheon Busan"};
	
	k=strlen(m);
	for(i=0;i<k;i++)
	{
		if(islower (m[i]) )
		{
			m[i]=m[i]-32;
		}
	}
	for(i=0;i<k;i++)
	{
		{
			printf("%c",m[i]);
		}
	}
}
