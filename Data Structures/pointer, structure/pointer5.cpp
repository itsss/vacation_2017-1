#include <stdio.h>

void f1(int a, int *b)
{
	printf("%d %d\n", a++, (*b)++);
}

void f2(int a, int b)
{
	printf("%d %d\n", a++, b++);
}

int main()
{
	int a=10, b=20;
	f1(a, &b);
	f2(a, b);
	return 0;
}
