// sudo code.
#include <stdio.h>

// set a buffer address that user provides
void setbuf (FILE *stream, char *buf);
// setbuf - buffering 영역지정 (2개) - FILE *stream 포인터, char *buf (buf pointer-full buffering)

  buf : non-NULL address for normal buffering // 일반 버퍼링을 위한 주소
    NULL if unbuffering // NULL (비워져있다- buffering x)
return : none

// set a buffer address and buffering type
int setvbuf (FILE *stream, char *buf, int type, size_t size);
// setvbuf - buffer type (크기지정) - FILE *stream 포인터 , char *buf (buffer pointer), int type (buffer type), size_t size (buffer 크기)
  buf : // same as the above - 이와동일
  type : // the type of buffering - 버퍼링 유형
  size : // buffer size - 버퍼크기
return 0 for success, ornonzero for an error 
