// Dereference Operator
// Return the value at the pointer address - 포인터 주소 값을 return 해준다.
// %p - 변수의 주소값를 출력, %c - 변수의 문자를 출력

#include <stdio.h>

int main()
{
  char c = 'A';
  char* pc = &c; // c의 주소값을 포인터 pc에 넣는다. 

  printf("%c %c\n", c, *pc);
  // 변수 c와 포인터 pc가 가리키는 값을 출력, 포인터 pc -> memory 주소의 있는 값 = 'A'  
  // %c - 문자값 출력시 사용, 변수 c는 'A'를 가지고 있음. 포인터 pc는 변수 c의 주소 값을 가지고 있으므로, *pc로 포인터 pc가 가리키는 값을 출력하면 'A'가 출력
  
  *pc = 'C'; // 포인터 변수 pc가 가리키는 값을 변경하여 변수 c의 값을 변경 -> 'C'로 변경
  printf("%c %c\n", c, *pc);
  // 포인터 pc가 가리키는 값을 C로 변경하고, 변수 c와 포인터 pc가 가리키는 값을 출력, 변수 c와 포인터 pc가 모두 C를 가리키게 된다.
  // 이는 포인터 변수 pc가 변수 c의 주소 값을 저장

  return 0;
}

// %p - 변수의 주소값를 출력, %c - 변수의 문자를 출력
