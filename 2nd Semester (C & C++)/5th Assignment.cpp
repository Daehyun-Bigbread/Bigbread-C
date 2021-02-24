#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Point //2차원 점을 위한 class
{
private:
	// 멤버변수
	int x;
	int y;

public:
	//멤버함수
	void set_x(int x) // x값 설정 
	{
		this->x = x;
	}
	void set_y(int y) // y값 설정 
	{
		this->y = y;
	}

	int get_x() // x값을 반환
	{
		return x;
	}
	int get_y() // y값을 반환
	{
		return y;
	}

};
// 함수의 선언 
int CCW(Point P1, Point P2, Point P3);
float point_length(Point P1, Point P2);

class Polygon //다각형을 위한 
{
private:
	vector<Point> p; //점들을 저장하는 vector 객체 

public:
	void add_point(Point a) // 포인트를 vector에 추가 
	{
		p.push_back(a); //vector 객체 뒤에다가 추가로 붙어주는거
	}

	int omok() //오목점의 개수를 구하는 함수. 
	{
		int count = 0;
		for (int i = 0; i < p.size(); i++)
// p.size (벡터의 개수) 점의 개수만큼 반복해요~  
		{
			Point p1, p2, p3; //
			p1 = p[i];
			p2 = p[(i + 1) % p.size()];
// ex) 4인경우 0,1,2,3 3에서 0으로 넘어가야 함으로 나머지 연산을 해준다. 
			p3 = p[(i + 2) % p.size()];

			if (CCW(p1, p2, p3) == -1)
			{
				count++; //오목점의 개수  
			}
		}
		return count;
	}

	float length() // n각형 둘레 
	{
		float length = 0; //p1 + p2값 
		for (int i = 0; i < p.size(); i++)
// p.size (벡터의 개수) 점의 개수만큼 반복해요~  
		{
			Point p1, p2;
			p1 = p[i];
			p2 = p[(i + 1) % p.size()];

			length += point_length(p1, p2); //p1, p2의 길이를 합한다.
		}
		return length;
	}

	float square_measure() //다각형 넓이 
	{
		float area = 0;
		for (int i = 1; i < p.size(); i++)
// p.size (벡터의 개수) 점의 개수만큼 반복해요~ 
			area += p[i].get_x() * p[(i + 1) % p.size()].get_y();
		// x1y2 + x2y3 + ... ex) 3각형일때 x1y2 + x2y3 + x3y1 

		for (int i = 1; i < p.size(); i++)
// p.size (벡터의 개수) 점의 개수만큼 반복해요~  
			area -= p[(i + 1) % p.size()].get_x() * p[i].get_y();
		// - x2y1 - x3y2 - ... ex) 3각형일때 - x2y1 - x3y2 - x1y3

		area = fabs(area); // fabs -> float 절대값` 
		area /= 2; // area *= 0.5
		return area;
	}
};

// 함수의 정의 
int CCW(Point P1, Point P2, Point P3) // 예각,둔각,일직선 판단 함수  
{
	int temp = (P2.get_x() - P1.get_x()) * (P3.get_y() - P1.get_y()) - (P2.get_y() - P1.get_y()) * (P3.get_x() - P1.get_x());

	if (temp > 0)
	{
		return 1;
	}
	else if (temp < 0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

float point_length(Point P1, Point P2) //p1과 p2의 길이를 구함. 두점의 길이 구하기 
{
	float a; // 가로길이
	float b; // 세로길이
	float c;

	//abs(값) - 절대값 
	//pow(밑, 지수) - 제곱
	//sqrt(값) - 루트 

	a = abs(P1.get_x() - P2.get_x()); // a의 길이 수식 
	b = abs(P1.get_y() - P2.get_y()); // b의 길이 수식 
	c = sqrt(pow(a, 2) + pow(b, 2));  // c값 

	return c;
}

int main()
{

	int n;
	cin >> n; //n은 점의 개수(즉, n각형)

	Polygon polygon;
	for (int i = 0; i < n; i++) //점의 개수만큼 for문 반복.
	{
		float x, y;
		cin >> x >> y; //x,y값 입력받음
		Point p; //2차원 점을 위한 class
		p.set_x(x); // x값 설정 
		p.set_y(y); // y값 설정 
		polygon.add_point(p); // 포인트를 vector에 추가 
	}

	cout << fixed;
	cout.precision(1); //소수점 한자리 까지 출력.
	cout << polygon.omok() << endl; //오목점의 개수 출력
	cout << polygon.length() << endl; // n각형 둘레 출력
	cout << polygon.square_measure() << endl; //다각형 넓이 출력
	return 0;
}
