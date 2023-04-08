// Reference Operator (변수의 주소를 가져올때 쓰는 기호)
// Return the address of an variable
// %p - 변수의 주소값를 출력, %c - 변수의 문자를 출력

#include <stdio.h>

int main()
{
  char c = 'A'; // 어떤 타입의 데이터 주소값을 저장하는지 알려줘야함 
  char* pc = &c; // ex) char* pc 라는 주소값을 가져오겠다. - 포인터 pc가 가리키는 값 -> c의 주소값.
  
  printf("%c %p\n", c, pc); // 변수 c와 포인터 pc가 가리키는 값을 출력, C = 'A', PC = c의 주소값
  printf("%p %p\n", &c, &pc); // 변수 c와 포인터 pc의 주소 값을 출력, 변수 c의 주소값 = 포인터 PC가 가리키는 값.
  printf("%d %d\n", sizeof(c), sizeof(pc)); // 변수 c와 포인터 pc의 크기를 출력, c = char(문자형) - 1byte, pc 포인터 - 4byte
  
  return 0;
}
