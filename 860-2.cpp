#include <stdio.h>
#include <string.h>
#include <math.h>

long long prime_number(int k, long long *arr)
{
	if(arr[k] != 0)
	{
		return arr[k];
	}
	else
	{
		int divide_flag = 1, i;
		
		if(arr[k-1] == 0) arr[k-1] = prime_number(k-1, arr);
		int ans = arr[k-1];
		
		while(divide_flag)
		{
			ans++; divide_flag = 0;
			for(i = 1; i <= sqrt((double)k); i++)
			{
				if(ans % arr[i] == 0)
				{
					divide_flag = 1;
				}
				if(divide_flag) break;
			}
		}
		return ans;
	}
}

int main(void)
{
	int k;
	long long ans;
	scanf("%d", &k);
	
	long long arr[k+1];
	memset( arr, 0, (k+1) * sizeof(long long) );
	arr[1] = 2;
	
	ans = prime_number(k, arr);
	printf("%d", ans);
}
