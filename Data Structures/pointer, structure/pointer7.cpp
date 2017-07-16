#include <stdio.h>

int f(int *b, int n)
{
	int max = 0;
	for(int i = 0; i < n; i++)
	{
		if(*(b+i)>max) max = *(b+i);
	}
	return max;
}

int main()
{
	int a[5] = {90, 50, 25, 76, 37};
	printf("%d\n", f(a, 5));
	return 0;
}
