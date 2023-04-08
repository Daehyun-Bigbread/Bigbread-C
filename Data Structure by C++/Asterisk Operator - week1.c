// Dereference Operator
// Return the value at the pointer address - 포인터 주소 값을 return 해준다.
#include <stdio.h>

int main()
{
  char c = 'A';
  char* pc = &c; // c의 주소값을 포인터 pc에 넣는다. 

  printf("%c %c\n", c, *pc); // 변수 c와 포인터 pc가 가리키는 값을 출력, 포인터 pc -> memory 주소의 있는 값 = 'A'

  *pc = 'C'; // 포인터 변수 pc가 가리키는 값을 변경하여 변수 c의 값을 변경 -> 'C'로 변경
  printf("%c %c\n", c, *pc);
  // 포인터 pc가 가리키는 값을 C로 변경하고, 변수 c와 포인터 pc가 가리키는 값을 출력, 변수 c와 포인터 pc가 모두 C를 가리키게 된다.
  // 이는 포인터 변수 pc가 변수 c의 주소 값을 저장

  return 0;
}
