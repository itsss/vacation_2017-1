#include <stdio.h>

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int *pa = a;
	
	printf("%d %d\n", pa[1], *(pa+1));
	printf("%d %d\n", pa[2], *(pa+2));
}
