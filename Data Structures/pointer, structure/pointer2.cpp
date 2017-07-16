#include <stdio.h>

void add(int a, int b, int *c)
{
	*c = a + b;
}

int main()
{
	int x = 20, y = 10, sum;
	add(x, y, &sum);
	printf("%d %d %d\n", x, y, sum);
}

//리턴값 사용 안하고 결과를 반환함. 
