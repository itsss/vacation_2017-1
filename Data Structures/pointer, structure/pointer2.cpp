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

//���ϰ� ��� ���ϰ� ����� ��ȯ��. 
