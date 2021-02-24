#include <stdio.h>

int main() {
	int tmp, image[10];
	image[0] = 0; image[9] = 0;
	for (int idx = 1; idx <= 8; idx++) {
		printf("0 또는1을 입력하시오. ");
		scanf("%d", &tmp); //사용자가 0 또는 1을 입력한다고 가정한다.
		image[idx] = tmp;
	}

	int total = 0; //연속 되는 1 개수를 저장해줄 변수 설정
	for (int i = 0; i < 10; i++) { //연속되는 1의 개수를 구해 출력해주기 위한 반복문
		if (image[i] == 1) total++; // 배열 값이 1이면 total값의 증가 시켜 연속되는 1의 수를 계산
		else if (image[i] == 0 && total != 0) { //1의 연속이 끝나면 지금 까지 구한 1의 길이 출력 단, 측정된 1이 0개면 출력 X
			printf("%d ", total);
			total = 0;// 1의 개수/길이를 새로 측정 저장하기 위해 초기화
		}
	}

	return 0;
}
