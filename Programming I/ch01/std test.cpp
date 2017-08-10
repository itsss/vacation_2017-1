#include <stdio.h>
#include <algorithm>

int main()
{
	int a[5] = { 5, 2, 8, 10, 1 };
	std::sort(a, a+5); //a[0] ~ a[4] ±îÁö 
	
	for(int i = 0; i < 5; i++) printf("%d ", a[i]);	
}
