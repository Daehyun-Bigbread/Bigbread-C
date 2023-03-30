#include <stdio.h>
int fflush( FILE *stream);
  // 해당 FILE *stream 포인터 객체와 연관된 buffer 안에 있는 data를 실제 system call을 통해 kernel로 내려준다.
  // return 0 for normal 
  // EOF for error
printf("something"); // Line buffering (memory엔 존재하지 않고, buffer에만 존재한다.) 
fflush(stdout); // 실질적으로 kernel에 내려주려면 fflush를 사용해야 한다.
