#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a,b,c;
   
   for(int i=1; i<45; i++)
   {
      a = i * (i+1) / 2;
      for(int j=1; j<45; j++)
      {
         b = j * (j+1) / 2;
         for(int k=1; k<45; k++)
         {
         c = k * (k+1) / 2;
            if (a+b+c==n)
            {
               printf("%d %d %d\n",a,b,c);
               return 0;
            }
            if (i==44 && j==44 && k==44)
            {
            printf("-1\n");
            return 0;
            }
         }
      }
   }
   return 0;
}
