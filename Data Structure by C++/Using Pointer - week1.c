#include <stdio.h>

int main()
{
  int a, b, c;
  int* p, *q, *r;
  
  a = 6, b = 10;
  p = &b, q = p, r = &c;
  p = &a, *q = 8, *r = *p;
  *r = a + *q + *&c;

  printf("%d %d %d", a, b, c);
  return 0;
}
