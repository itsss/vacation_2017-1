#include <stdio.h>

int main()
{
	int a, b=25;
	scanf("%d", &a);
	
	for(int i = a; i > 0; i--)
	{
		for(int j = a; j > 0; j--)
		{
			printf("%d ", b--);
		}
		printf("\n");
	}
}

/*5 입력 시,

25 24 23 22 21 
20 19 18 17 16 
15 14 13 12 11 
10 9 8 7 6 
5 4 3 2 1 

출력*/ 
