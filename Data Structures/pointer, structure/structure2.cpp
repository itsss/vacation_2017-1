#include <stdio.h>

typedef long long int Long;

int main()
{
	int a;
	Long b;
	a = 0x7fffffff; //max of int
	b = (Long)a+1;
	
	printf("%d\n %d\n %lld", a, a+1, b);
	return 0;
}
