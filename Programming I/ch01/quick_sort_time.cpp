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

int main()
{
	srand(time(NULL));
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		S[i] = rand();
	}
	
	int start = clock();
	
	std::sort(S, S+n);

	printf("Result time = %.3lf (sec)", (double)(clock()-start)/CLOCKS_PER_SEC);
	return 0;
}
