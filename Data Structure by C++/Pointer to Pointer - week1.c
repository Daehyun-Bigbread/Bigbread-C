#include <stdio.h>

int main()
{
	char c = 'A'; // 변수 c를 문자 'A'로 초기화
	char* pc = &c; // 포인터 변수 pc에 변수 c의 주소(&c) -> pC에 할당
	char** ppc = &pc; // 포인터 변수 ppc에 변수 pc의 주소(&pc) -> ppc에 할

	printf("%p %p\n", pc, ppc); // 첫 번째 줄은 변수 pc와 ppc의 주소를 출력합니다. 변수 pc (c의 주소값) & ppc가 가리키고 있는 주소값 (pc의 주소값)
	printf("%p %p\n", &pc, &ppc); // 두 번째 줄은 변수 pc와 ppc의 주소를 출력합니다, 변수 pc & ppc 자체의 주소값.
	printf("%d ", sizeof(pc)); // 세 번째 줄은 변수 pc의 크기를 출력합니다.
	printf("%d\n", sizeof(ppc)); // 네 번째 줄은 변수 ppc의 크기를 출력합니다.

	return 0;
}

