#include<stdio.h>
#include<ctype.h>
void main()
{
	int a[]={45,12,18};
int len;//�迭�� ����
len=sizeof(a)/sizeof(a[0]); 
	int i,j,c;
		printf("������ : ");
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
	printf("������ : ");
	for(i=0;i<len;i++)
	{
		printf("%4d",a[i]); 
	}
}

