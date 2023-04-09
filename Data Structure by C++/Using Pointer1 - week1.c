#include <stdio.h>

int main()
{
  int a, b, c;
  int* p, *q, *r;
  
  a = 6, b = 10; // a = 6, b = 10
  p = &b, q = p, r = &c; 
  // q = p, p = &b -> p,q에 b의 주소값 할당, p & q = 10, r에 c의 주소값 할당
  p = &a, *q = 8, *r = *p;
  // p = a, a의 주소값 할당 -> p = 6, *q = 8, *r = *p -> 포인터 변수 r이 가리키는 변수인 c의 값을 포인터 변수 p가 가리키는 변수인 a의 값인 6으로 변경합니다. 
  // 즉 *r -> *p, p -> a의 주소값. *p = a -> 6
  *r = a + *q + *&c; // a = 6, *q = 8 = 14 ,*&c = 6, 14+6 = 20

  printf("%d %d %d", a, b, c); // a = 6, b = 8, c = 20
  return 0;
}
