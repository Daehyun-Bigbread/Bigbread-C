#include <stdio.h>
#define ARRAY_SIZE	5

void inputNumbers(int num[], int len);
double computeAverage(int num[], int len);

int main()
{
	int numbers[ARRAY_SIZE];
	

	inputNumbers(numbers, ARRAY_SIZE);
	printf("average: %.3lf", computeAverage(numbers, ARRAY_SIZE));
	
	return 0;
}
