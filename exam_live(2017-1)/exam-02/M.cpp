#include <stdio.h>

int main()
{
	int ga[100] = {2}, na[100] = {2}, n, flag=1;
	scanf("%d", &n);
	
	for(int i = 0; i < n-1; i++)
	{
		if(flag == 1)
		{
			ga[i+1] = ga[i];
			na[i+1] = ga[i] + na[i];
			flag = 0;
		}
		else
		{
			ga[i+1] = ga[i] + na[i];
			na[i+1] = na[i];
			flag = 1;
		}
	}
	printf("%d", ((ga[n-1]/2) + (na[n-1]/2))*2 );
}
