/*#include <stdio.h>

int main()
{
	long long int start, end, i, count=0, n, ans=0;
	scanf("%d %d", &start, &end);
	
	for(int i = start; i <= end; i++)
	{
		count = 0;
		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0) count++;
		}
		if(count % 2 == 0) ans++;
	}
	printf("%lld", ans);
	
}*/

#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, i, cnt=0;
	scanf("%d %d", &a, &b);
	cnt = b - a + 1;
	for(i=sqrt(a); i * i <= b; i++)
	{
		if(i * i >= a) cnt--; //제곱수는 제외 
	}
	printf("%ld", cnt);
}
