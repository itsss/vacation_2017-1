#include <stdio.h>

int main()
{
	int x=20, y=10;
	int *px = &x;
	int *py = &y;
	
	printf("%d %d\n", x+*py, *&x**px);
	
	return 0;
}
