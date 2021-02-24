#include <stdio.h>
int main()
{
   int n, a, h, count=1;
   int rest=0;
   int numbers[10000];
   
   scanf("%d",&n);
   
   for(int i=0; i<n; i++) 
   {
      scanf("%d", &numbers[i]); 
   }
   
   for(int x=0; x<n; x++)
   {
   	
      int a=1;
      for(int y= x+1; y<n; y++)
	  {
         if(numbers[x] == numbers[y]) /
         {
         	a+=1;
		 }
      }
      
      if(a >=count)
	  {
         h = numbers[x];
         count = a; // 媛
         
         if(numbers[x]>=rest) 
		 {
            rest = numbers[x]; //rest
         }
      }
   }
   
   printf("%d %d\n", rest, count); 
   return 0;
}
