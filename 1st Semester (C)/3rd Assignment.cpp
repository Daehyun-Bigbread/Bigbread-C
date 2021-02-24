#include <stdio.h>

int solution(int n) {
    int a = 10, sum = n + n % a;
    while (1) {
        if (n / a == 0) {
            break;
        }
        else if (n / a < 10) {
            sum += n / a;
            break;
        }
        else {
            sum += (n / a) % 10;
            a *= 10;
        }
    }
    return sum;
}

int main() {
    int num;
    printf("N is = ");
    scanf_s("%d", &num);
    int stand = num * 5;
    while (solution(num) < stand) {
        printf("%d\n", solution(num));
        num = solution(num);
    }
}
