#include <stdio.h>

int main()
{
	int a, b, k, cnt;
	scanf("%d %d %d", &a, &b, &k);
	
	for(int i = a-1; i <= b; i++)
	{
		if(k%i==0) cnt++;
	}
	printf("%d", cnt);
}
