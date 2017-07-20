#include <stdio.h>
int pas(int a, int b)
{
    if (a == 0 || b == 0 || a == b) return 1;
    else return pas(a - 1, b) + pas(a - 1, b - 1);
}
 
int main()
{
    int a, i=0, j=0;
    scanf("%d", &a);
 
    for (i = 0; i < a; i++)
	{
        for (j = 0; j <= i; j++)
		{
            printf("%d ", pas(i, j));
        }
        printf("\n");
    }
    return 0;
}

// ÆÄ½ºÄ®ÀÇ »ï°¢Çü 
