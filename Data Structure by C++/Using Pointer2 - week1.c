#include <stdio.h>

int main()
{
  int a, b, c;
  int* pa = &a, *pb = &b, *pc = &c;
  
  *pa = 10, *pb = 20;
  *pc = *pa + *pb;

  printf("%d %d %d", a, b, c);
  
  return 0;
}
