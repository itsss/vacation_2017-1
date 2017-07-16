#include <stdio.h>

typedef struct Point
{
	int x, y;
}point;

void structPrint(point *a)
{
	printf("(%d, %d)\n", *a.x, *a.y);
}

int main()
{
	point p = {1, 2};
	structPrint(&p);
	return 0;
}
