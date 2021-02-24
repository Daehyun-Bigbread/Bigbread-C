#include <stdio.h>
int main()
{
  long a1,a2;
   long temp_a,temp_b;
   long gcd,lcm;

   scanf("%lld",&a1);
   
   while(1)
   {
      scanf("%lld",&a2);
      if(a2<0)
         break;
      else
	{
         temp_a=a1;
         temp_b=a2;
         if (a1>a2)
	 {
            temp_a=a2;
            temp_b=a1;
         }
         while (temp_a % temp_b != 0)
	{
            gcd = temp_a % temp_b;
            temp_a = temp_b;
            temp_b = gcd;
         }
         if(temp_a==temp_b)
            gcd=a1;
         lcm=a1 * a2 / gcd; 
         a1=lcm;
      }
   }
   printf("%lld",a1);
   
   return 0;
}
