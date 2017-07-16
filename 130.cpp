#include <stdio.h>

int main()
{
	long long int a[100];
	int n, i;
	scanf("%d", &n);
	a[1] = 1;
	a[2] = 1;
	for(i=3;i<=n;i++)
	{
		a[i] = a[i-1] + a[i-2]; //3부터 n까지 반복 
	}
	printf("%lld", a[n]);
	return 0;
}
