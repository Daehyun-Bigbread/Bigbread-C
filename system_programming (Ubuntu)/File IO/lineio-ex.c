#include <stdio.h>

#define BUFFER_SIZE 100

int main(int argc, char *argv[])
{
  char ubuf[BUFFER_SIZE], line[BUFFER_SIZE];
  FILE *fpin, *fpout;

  if(argc !=3)
  {
    perror(argv[0[);
    return 1;
  }
  if ((fpin = fopen(argv[1], "r")) == NULL)
  {
    perror(argv[1]);
    return 2;
  }
  if ((fpin = fopen(argv[2], "a")) == NULL)
  {
    perror(argv[2]);
    return 3;
  }
  if (setvbuf(fpin, ubuf, _IOLBF, BUFFER_SIZE) != 0) // line buffering
  {
    perror("setvbuf(fpin)");
    return 4;
  }
  if (setvbuf(fpout, ubuf, _IOLBF, BUFFER_SIZE) != 0) // line buffering
  {
    perror("setvbuf(fpout)");
    return 5;
  }

  while (fgets(line, BUFFER_SIZE, fpin) != NULL)
    fputs(line, fpout);

  fclose(fpin); fclose(fpout);
  return 0;
}

