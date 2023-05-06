// Sudo Code
// File open.

#include <stdio.h>
FILE * fopen ( const char *filename, const char *type); // file name, type를 지정해 주어야 한다.
  type : access mode
return a file stream pointer to the open file if succeed, or
  NULL (error: failed to open)

  
// Access modes
// r: Read Only
// w: Truncate file to zero length or create a file for writing. - 쓰기 가능, but 파일 크기가 0 
// a: Append mode(EOF), write only. The file is created if it does not exist. - 기존 파일이 있으면 덮어쓰기, 없으면 새로 만들어짐
// r+: Read/write
// w+: Truncate file to zero length or create a file for reading & writing. - 기존파일이 있으면 파일 크기를 0으로 만들고 새로 만듬
// a+: Read/append mode(EOF). The file is created if it does not exist. - 읽기 + 추가. 파일이 없는 경우 파일이 만들어진다.
