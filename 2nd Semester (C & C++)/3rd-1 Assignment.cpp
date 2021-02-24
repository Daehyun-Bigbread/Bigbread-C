#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct point
{
   int x;
   int y;
}   Point;

int ccw(Point P1, Point P2, Point P3)
{
   int temp = (P2.x - P1.x)*(P3.y - P1.y) - (P2.y - P1.y)*(P3.x - P1.x);
   
   if (temp > 0)
   {
      return 1;
   }
   else if (temp < 0)
   {
      return -1;
  }
   else
   {
      return 0;
   }
}

int main()
{
   
   Point * p;
   int n;
   int i=0;
   int count = 0;
   
   scanf("%d",&n); //점 개수 입력 받음
   
   p = (Point *)malloc(sizeof(Point)*n); // 동적할당
   
   for(int i=0; i<n; i++)
   {
      scanf("%d %d",&p[i].x, &p[i].y); //좌표 입력
   }
   
   for(int x=0; x<n-2; x++)
      //n-2 하는 이유: 없는점을 구할수 있음(4각형인데 육각형 홀리..)
   {
      if(ccw(p[x],p[x+1],p[x+2]) == -1)
         count++;
   }
   if(ccw(p[n-2],p[n-1],p[0]) == -1) //
      count++;
   if(ccw(p[n-1],p[0],p[1]) == -1) //
      count++;
   
   printf("%d\n",count);
   free(p);
   return 0;
}
