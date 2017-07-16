#include <stdio.h>

void swap(int a, int b)
{
	if(a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	printf("after : %d %d\n", a, b);
}

int main()
{
	int x = 20, y = 10;
	printf("before : %d %d\n", x, y);
	swap(x, y);
}
