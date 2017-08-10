#include <stdio.h>

int n, k, data[1000001];

int solve(int low, int high)
{
	int mid;
	while(high-low > 0)
	{
		mid = (low + high) / 2;
		if(data[mid] < k) low = mid + 1;
		else high = mid;
	}
	return high+1;
}

int main()
{
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++) scanf("%d", data+i);
	printf("%d", solve(0, n));
	return 0;
}
