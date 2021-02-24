#include <stdio.h>

int main() {
	int day = 0, last_day = 0;
	printf("1일은 무슨 요일 (0-일/1-월/2-화/3-수/4-목/5-금/6-토) ? ");
	scanf("%d", &day);
	printf("마지막 날은 몇 일 (28, 29, 30, 31 중 입력) ? ");
	scanf("%d", &last_day);

	printf("\n일  월  화  수  목  금  토\n");

	for (int i = 0; i < day; i++) { //첫 주에 빈 날짜 만큼 빈 칸을 만들어주는 반복문
		printf("   ");
	}
	for (int j = 1; j <= last_day; j++) {
		if (j % 7 == 7 - day) printf("%4d\n", j); //한 주의 마지막 날에는 숫자를 입력 후 줄 바꿈
		else if (j % 7 == 8 - day) printf("%2d", j); //일요일 시작할때는 숫자를 맨 앞에 붙여주기 위해 할당하는 칸 수 변경
		else printf("%4d", j);
	}
	return 0;
}
