#include <stdio.h>

int main()
{
	int n, i, j;
	long long int sum = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			sum += j;
		}
	}
	printf("%lld", sum);
}

//9214가 들어가니 에러, 1598(Test Case 4까지는 괜찮음)
//9214 -> 130417167360 (Correct)
//서식문자 %lld를 안 써서 incorrect가 나오는 것으로 추정. sum만 long long으로 하고 나머지는 int로 
