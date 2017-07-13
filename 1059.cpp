#include <stdio.h>

int main()
{
	int i, j, n, cnt1, cnt2 = 0, def, min=0, max=0, cnt=0;
	
	scanf("%d %d", &def, &n);
	
	for(i = def; i<=n; i++)
	{
		cnt1 = 0;
		for(j = 1; j <= i; j++)
		{
			if(i%j == 0) cnt1++;
		}
		if(cnt1 == 2) //이 조건을 통과하면 해당 수는 소수임. 
		{
			cnt2++;
			if(cnt == 0)
			{
				min = i;
				cnt = 1;
			}
			if(i > max) max = i;
		}
		
	}
	printf("%d\n%d", cnt2, min+max);
}
