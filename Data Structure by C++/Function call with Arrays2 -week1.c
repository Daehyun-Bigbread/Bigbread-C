// 주어진 코드는 inputNumbers()와 computeAverage()라는 두 가지 함수를 정의한다.

#include <stdio.h>

void inputNumbers(int num[], int len)
//inputNumbers() 함수는 int num, int len을 매개 변수로 사용한다.
//scanf() 함수를 사용하여 사용자로부터 len의 값을 입력 받고 배열 에 저장한다.
{
	int i;
	for (i = 0; i < len; i++)
		scanf("%d", &num[i]);
}

double computeAverage(int num[], int len)
// computeAverage() 함수는 입력 매개 변수와 동일한 배열 번호 및 길이 렌을 사용한다.
// 배열 내의 모든 정수를 합산하고 결과를 len 으로 나누어 배열 내 len의 평균을 계산한다. 그런 다음 계산된 평균이 이중 값으로 반환한다.
{
	int total = 0, i;
	for (i = 0; i < len; i++)
		total = total + num[i];
  
	return total / (double)len; // double을 사용하여 분할이 정수 나눗셈 대신 부동 소수점 나눗셈으로 수행되고 결과가 정수로 나온다.
}
