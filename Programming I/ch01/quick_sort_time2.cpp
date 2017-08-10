#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

int n, S[1000000];

void print_array()
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", S[i]);
	}
	printf("\n");
}

void swap(int a, int b)
{
	int t = S[a];
	S[a] = S[b];
	S[b] = t;
}

void quick_sort(int s, int e)
{
	if(s < e)
	{
		int p = s, l = s + 1, r = e;
		while(l <= r)
		{
			while(l <= e && S[l] <= S[p]) l++;
			while(r >= s+1 && S[r] >= S[p]) r--;
			if(l < r) swap(l, r);
		}
		swap(p, r);
		quick_sort(s, r-1);
		quick_sort(r+1, e);
	}
}

int main()
{
	srand(time(NULL));
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		S[i] = rand();
	}
	
	int start = clock();
	quick_sort(0, n-1);
	
	printf("Result time = %.3lf (sec)", (double)(clock()-start)/CLOCKS_PER_SEC);
	return 0;
}
