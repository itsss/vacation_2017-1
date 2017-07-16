#include <stdio.h>

bool prime(int num)
{
	int cnt = 0;
	for(int i = 2; i <= num ; i++)
	{
		if(num % i == 0)
		{
			cnt++;
		}
	}
	
	if(cnt < 2) return true;
	else return false;
}

int main()
{
	int primeCnt = 1;
	int i = 1;
	int input;
	
	scanf("%d", &input);
	while(true)
	{
		i = i + 2;
		if(prime(i))
		{
			primeCnt++;
		}
		
		if(primeCnt == input) break;
	}
	printf("%d", i);
}
