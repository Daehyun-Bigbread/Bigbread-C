include <iostream> //<stdio.h>
using namespace std; // c++특징

int main() {

	int a; // 현재 가지고 있는돈
	int b; // 캔디의 가격

	cout << "What is a? = "; // a값 입력 안내 메세지 출력
	cin >> a;  // 하나의 정수를 받아서 a에 저장
	cout << "What is b? = "; //b값 입력 안내 메세지 출력
	cin >> b;  // 하나의 정수를 받아서 b에 저장

	cout << "================ \n";  // 점선 출력
	
	cout << "a+b is = " << a + b << endl; // 변수a와 b의 값을 더함
	cout << "a-b is = " << a - b << endl;  // 변수a에서 b의 값을 뻴셈함
	cout << "a*b is = " << a * b << endl;  // 변수 a,b의 값을 곱함
	cout << "a/b is = " << a / b << endl; // 변수 a를 b의 값으로 나눔
	cout << "a%b is = " << a % b << endl; //변수 a를 b로 나누고 나머지 값을 출력

	cout << "================ \n"; // 점선 출력

	return 0;
}
