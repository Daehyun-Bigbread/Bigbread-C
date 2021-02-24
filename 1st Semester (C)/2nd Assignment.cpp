#include <stdio.h> // 표준 입출력 함수 헤더 파일

int main() {

	int a; // 변수 a선언
	int b; // 변수 b선언

	printf("What is a? = ",&a);  // a값 입력 안내 메세지 출력
	scanf_s("%d", &a); // 하나의 정수를 받아서 a에 저장
	printf("What is b? =  ",&b);  // b값 입력 안내 메세지 출력
	scanf_s("%d", &b); // 하나의 정수를 받아서 b에 저장

	printf("=================== \n"); // 점선 출력

	printf("a+b is = %d \n",a+b); // 변수a와 b의 값을 더함
	printf("a-b is = %d \n",a-b);  // 변수a에서 b의 값을 뻴셈함
	printf("a*b is = %d \n",a*b); // 변수 a,b의 값을 곱함
	printf("a/b is = %d \n",a/b); // 변수 a를 b의 값으로 나눔
	printf("a%b is = %d \n",a%b); //변수 a를 b로 나누고 나머지 값을 출력

	printf("=================== \n"); // 점선 출력

	return 0;
}
