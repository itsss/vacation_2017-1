#include <stdio.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int x = 20, y = 10;
	swap(&x, &y);
	printf("%d %d\n", x, y);
}
