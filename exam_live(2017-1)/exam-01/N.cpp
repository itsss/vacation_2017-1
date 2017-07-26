#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	for(int i = 1; i<=a; i++)
	{
		for(int j = 1; j <=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

//*을 활용하여, n*n 형태의 직각삼각형으로 그리는 프로그램
