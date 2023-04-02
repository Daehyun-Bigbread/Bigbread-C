// CMD Command : $ ./fileio-ex firstFile SecondFile
// argc = 3 , argv[0]="./fileio-ex", argv[1]="./firstFile". argv[2]="./SecondFile"
// 1,2번째 file open후, firstFile에 있는 data를 read & secondFile에 append 형식으로 한다.

#include <stdio.h>
int main( int argc, char *argv[])
{
  int c;
  FILE *fpin, *fpout;
  
  if( argc != 3)
  {
    perror( argv[0]);
    exit(1);
  }
  if(( fpin = fopen( argv[1], "r")) == NULL) // Read Only, 파일이 open이 제대로 되었으면 fpin의 값, 제대로 안되었으면 NULL출력
  {
    perror( argv[1]);
    exit(2);
  }
  if(( fpout = fopen( argv[2], "a")) == NULL) // Append 방식
  {
    perror( argv[2];
    exit(3);
  }
  setbuf( fpin, NULL); // unbuffered I/O (buffer 사용 안하는 I/O)
  setbuf( fpout, NULL); // unbuffered I/O
           
  while(( c = getc( fpin)) != EOF) 
  putc( c, fpout);
           
  fclose( fpin);
  fclose( fpout);
  exit(0);
}
