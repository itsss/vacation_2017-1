#include <stdio.h>
int n, k, A[1000001];

int solve(int s, int e)
{
	int m;
	while(e-s > 0)
	{
		m = (s + e) / 2;
		if(A[m] <= k) s = m + 1; //lower bound¶û ´Ù¸¥ Á¡ : < ¡æ <= 
		else e = m;
	}
	return e+1;
}

int main()
{
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", A+i);
	}
	
	printf("%d\n", solve(0, n));
	return 0;
}
