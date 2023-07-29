#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char buf[256];
	int rspn;
	long pos;

	if((fp = fopen(argv[1], "r")) == NULL) {
		perror(argv[1]);
		return 1;
	}

	rspn = fseek(fp, 8L, SEEK_SET);
	pos = ftell(fp);

	fgets(buf, 256, fp);
	printf("Position : %ld\n", pos);
	printf("%s\n", buf);

	rewind(fp);
	pos = ftell(fp);

	fgets(buf, 256, fp);
	fclose(fp);
	printf("Position : %ld\n", pos);
	printf("%s\n", buf);
	return 0;
}
