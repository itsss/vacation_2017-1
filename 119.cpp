#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int ans = (2*a)-1;
	for(int i = 0; i < ans; i++) printf("*");
}
