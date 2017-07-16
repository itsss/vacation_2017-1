#include <stdio.h>
 
int i, j, sum=1, arr[100000], f;

int find(int a)
{
    for(i = 2; i <= 30000; i++) 
	{
        for(j = 2; j <= i-1; j++) 
		{
            if(i % j == 0) 
			{
                break;
            }
        }
        
        if(i == j) 
		{
			arr[sum++] = j;
        }
    }
    return arr[f];
}
int main(void) 
{
    scanf("%d", &f);
    printf("%lld", find(f));
}

