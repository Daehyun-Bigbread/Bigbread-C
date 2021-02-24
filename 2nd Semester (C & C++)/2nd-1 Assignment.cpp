4. 프로그램
#include <stdio.h>
int main() {
	int answers[100];  // 정답 배열 
	int points[100];   // 점수 배열 
	int st_answers[100]; // 학생 답 배열 
	int sum[100] = {0}; //학생답들
	
	int q_number=0; //문제수 입력  
	 
	scanf("%d\n",q_number); //문제수 입력받음
	
	for(int i=0; i<q_number; i++)
	{ 
		scanf("%d",answers);
	}
	
	for(int j=0; j<q_number; j++)
	{
		scanf("%d",points);
	}
	
	int st=0; //학생수
	scanf("%d",st);
	
	for(int k=0; k<st; k++) // k=학생수
	{
		for(int m=0; m<q_number; m++) // m=문제수(문제번호)
		{
			scanf("%d",st_answers[m]);
		}
		for(int m=0; m<q_number; m++)
		{
			if(answers[m]==st_answers[m])
			{
				sum[k] += points[m];
			}
		}
	}
	int h_points = 0;
	
	for(int n=0; n<st; n++)
	{
		if(sum[n] > h_points)
			h_points = sum[n];
	}
	
	printf("%d",h_points);
	
	return 0;
}
