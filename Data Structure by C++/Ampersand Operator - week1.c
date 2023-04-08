// Reference Operator (변수의 주소를 가져올때 쓰는 기호)
// Return the address of an variable
// %p - 변수의 주소값를 출력, %c - 변수의 문자를 출력

#include <stdio.h>

int main()
{
  int n = 3; // 어떤 타입의 데이터 주소값을 저장하는지 알려줘야함 
  int* pn = &n; // - 포인터 pn가 가리키는 값 -> n의 주소값.

  printf("%d %p\n", n, pn); // 변수 n와 포인터 pn가 가리키는 값을 출력, n = '3', pn = n의 주소값
  printf("%p %p\n", &n, &pn); // 변수 n와 포인터 pn의 주소 값을 출력, 변수 n의 주소값 = 포인터 pn가 가리키는 값.
  printf("%d %d\n", sizeof(n), sizeof(pn)); // 변수 n와 포인터 pn의 크기를 출력, n = int(정수형) - 4byte, pc 포인터 변수 - 4byte

  return 0;
}
