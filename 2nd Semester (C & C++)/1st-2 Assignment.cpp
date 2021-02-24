#include <stdio.h>
int main(void)
{
	int N, i, j;
	int not_prime[10001]={1,1,0};
	
	for(i=2;i*i<10001;i++)
		if(!not_prime[i])
			for(j=i*i;j<10001;j+=i)
				not_prime[j] = 1;
	
	while(1)
	{
		scanf("%d",&N); //입력값
		
		for(i=N/2;i>=2;i--)
			if(!not_prime[i]&&!not_prime[N-i])
			{
				printf("%d %d\n",i, N - i);
				break;
			}
		break;
	}
	
	return 0;
}
