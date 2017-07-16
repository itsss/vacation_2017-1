#include <stdio.h>

void f(int a, int b, int *c, int *d, int *e, int *f)
{
	*c = a + b;
	*d = a - b;
	*e = a * b;
	*f = a / b;
}

int main()
{
	int x, y, sum, sub, mul, div;
	scanf("%d %d", &x, &y);
	
	f(x, y, &sum, &sub, &mul, &div);
	
	printf("%d %d %d %d", sum, sub, mul, div);
	//포인터 사칙연산 
}
