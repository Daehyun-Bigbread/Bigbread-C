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

