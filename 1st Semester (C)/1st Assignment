#include <stdio.h>

int main() {

	int money; //현재 가지고 있는 돈
	int candy_price; // 캔디의 가격

	printf("현재 가지고 있는 돈: ", &money);		// 현재 보유금액 입력 안내 메세지 출력
	scanf_s("%d", &money);		// 하나의 정수를 받아서 money에 저장
	printf("캔디의 가격: ", &candy_price);		// 캔디의 가격 입력 안내 메세지 출력
	scanf_s("%d", &candy_price);		// 하나의 정수를 받아서 candy_price 에 저장

	//최대한 살 수 있는 사탕의 수
	int n_candies = money / candy_price;		 // 변수 money를 candy_price로 나눈값을 n_candies에 저장.
	printf("최대로 살 수 있는 캔디의 개수 = %d \n",n_candies);		// n_candies의 값을 10진수 형태로 출력

	//사탕을 구입하고 남은 돈
	int change = money % candy_price;		// 변수 money를 candy_price로 나누고 나머지 값을 change에 저장.
	printf("캔디 구입후 남은 돈 = %d \n", change);		// change의 값을 10진수 형태로 출력


	return 0;
}
