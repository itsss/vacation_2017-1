#include <stdio.h>

int comb(int a, int b)
{
	long long int i, j, n=1, r=1;
	for(i = a; i >= a - b + 1; i--)
	{
		n = n * i;
	}
	
	for(j = b; j >= 1; j--)
	{
		r = r * j;
	}
	
	return (n/r);
}

int main()
{
	long long int n, r;
	scanf("%d %d", &n, &r);
	printf("%lld", comb(n, r));
}
