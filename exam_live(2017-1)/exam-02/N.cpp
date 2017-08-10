#include <stdio.h>

int main()
{
	int N, cnt = 0, a, b;
	scanf("%d", &N);
	
	for(a = N / 3 + (N % 3 != 0); a < N / 2 + N % 2; a++)
	{
		for(b = (N - a) / 2 + (N - a) % 2; b <= a; b++) cnt++;
	}
	
	printf("%d", cnt);
}
