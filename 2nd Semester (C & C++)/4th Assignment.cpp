#include <iostream>
using namespace std;
class Calculator
{
private:
	int value;
	int memoryValue;
public:
	int Caculator()
	{
		value = 0;
		memoryValue = 0;
		return value;
	}
	int add(int num) // 덧셈 Class
	{
		value += num;
		return value;
	}
	int sub(int num) // 뻴셈 Class
	{
		value -= num;
		return value;
	}
	int mul(int num) // 곱셈 Class
	{
		value *= num;
		return value;
	}
	int currentValue() // 현재 value값 리턴하는 Class
	{
		return value;
	}
	int clear() // 현재 값을 0으로 하는 Class 
	{
		value = 0;
		return value;
	}
	int MS() // 현재 값을 메모리에 저장하는 Class (현재 값을 메모리 값으로 설정)
	{
		memoryValue = value;
		return value;
	}
	int MR() // 메모리에 있는 값을 현재 값으로 설정하는 Class (현재 값이 변함)
	{
		value = memoryValue;
		return value;
	}
	int MPlus()
	// 메모리에 저장되어 있는 값에 현재 값을 더한 결과 값을 메모리에 저장하는 Class
	{
		memoryValue += value;
		return value;
	}
	int change() // 현재 값의 부호를 바꾸는 Class
	{
		value = value * -1;
		return value;
	}
	//생성자 만들기
};

int main()
{
	Calculator c;
	//Calculator c(1);
	string command;
	c = Calculator();

	while (1)
	{
		cin >> command;
		if (command == "add")
		// 현재 값에 x를 더한 값이 현재 값이 되고, 이 값을 반환한다.
		{
			int num;
			cin >> num;
			c.add(num);
		}
		else if (command == "sub")
		// 현재 값에서 x를 뺀 값이 현재 값이 되고, 이 값을 반환한다.
		{
			int num;
			cin >> num;
			c.sub(num);
		}
		else if (command == "mul")
		//현재 값에 x를 곱한 값이 현재 값이 되고, 이 값을 반환한다. 
		{
			int num;
			cin >> num;
			c.mul(num);
		}
		else if (command == "clear") //현재 값을 0으로 함
		{
			c.clear();
		}
		else if (command == "MS")
		// 재 값을 메모리에 저장 (현재 값을 메모리 값으로 설정).
		{
			c.MS();
		}
		else if (command == "MR")
		// 메모리에 저장되어 있는 값을 현재 값으로 설정 
		{
			c.MR();
			cout << c.currentValue() << endl;
		}
		else if (command == "MPlus")
		// 메모리에 저장되어 있는 값에 현재 값을 더한 결과 값을 메모리에 저장함
		{
			c.MPlus();
		}
		else if (command == "change") // 현재 값의 부호를 바꿈
		{
			c.change();
		}
		else if (command == "result") // 현재 값을 출력함
		{
			cout << c.currentValue() << endl;
		}
		else if (command == "quit") // 종료
		{
			break;
		}
	}
	return 0;
}
