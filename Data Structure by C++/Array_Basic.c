// 이 프로그램은 사용자에게 5개의 정수를 for 루프 안에 scanf로 입력 받고,
// 입력 받은 값을 배열로 저장한다. 그런 다음 for 루프를 사용하여 배열 요소를 역순으로 출력한다.


#include <stdio.h>
#define ARRAY_SIZE 5

int main()
 {
  int numbers[ARRAY_SIZE], i;
  printf("Input five numbers\n");
  
  for (i = 0; i < ARRAY_SIZE; i++)
    scanf("%d", &numbers[i]);
    
  for (i = ARRAY_SIZE - 1; i >= 0; i--)
    printf("%d ", numbers[i]);
    
  return 0;
}
