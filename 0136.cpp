#include <stdio.h>

int main()
{
	int n, k, A[100001];
	scanf("%d %d", &n, &k);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		if(A[i] == k)
		{
			printf("%d", i+1);
			return 0;
		}
	}
	printf("-1");
}
