#include<stdio.h>
#include<ctype.h>
void main()
{
	int a[5]={60,40,80,100,90};
	int i,j,k,r[5];
	for(i=0;i<5;i++)
	{
		k=1;
		for(j=0;j<5;j++)
		{
			if(a[i]<a[j])
			{
				k++;
			}
		}
		r[1]=k;
	}
	for(i=0;i<5;i++)
	{
		printf("%4d => %4d \n",a[i],r[i]); 
	}
}
