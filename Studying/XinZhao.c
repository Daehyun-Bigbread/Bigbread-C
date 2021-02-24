#include<stdio.h>
#include<ctype.h>
void main()
{
	int a[]={45,12,18};
int len;//배열의 개수
len=sizeof(a)/sizeof(a[0]); 
	int i,j,c;
		printf("정렬전 : ");
			for(i=0;i<len;i++)
	{			printf("%4d",a[i]);	
	}
	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		if(a[i]>a[j])
		{
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}			
	}
	printf("\n");
	printf("정렬후 : ");
	for(i=0;i<len;i++)
	{
		printf("%4d",a[i]); 
	}
}

