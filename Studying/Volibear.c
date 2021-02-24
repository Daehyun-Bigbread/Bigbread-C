#include<stdio.h>
#include<math.h>
void main()
{

	char city[20]="Seoul Korea!!";
	
	printf("%s\n",city);
	city[5]='\0';
	printf("%s\n",city);
	
	printf("%c => %d \n ",city[0]);
	printf("%c => %d \n ",city[1]);
	printf("%c => %d \n ",city[2]);
}
	
	
