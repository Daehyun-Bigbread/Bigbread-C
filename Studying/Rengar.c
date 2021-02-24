#include<stdio.h>

void main()
{
	int a,b,c;
	printf("»ç°ú\t¹è\t±Ö \n",a,b,c);
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=5;b++)
		{
			for(c=1;c<=20;c++)
			{
				if(a*300+b*200+c*50==1000)
				printf("%d\t%d\t%d\n",a,b,c);
			}
		}
		
	}
	
	
}
