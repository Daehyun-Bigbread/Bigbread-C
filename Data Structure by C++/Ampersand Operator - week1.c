#include <stdio.h>

int main()
{
  int n = 3;
  int* pn = &n;

  printf("%d %p\n", n, pn);
  printf("%p %p\n", &n, &pn);
  printf("%d %d\n", sizeof(n), sizeof(pn));

  return 0;
}
