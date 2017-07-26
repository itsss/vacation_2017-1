#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	for(int i = 1; i <= 9; i++)
	{
		printf("%d*%d=%d\n", a, i, a*i);
	}
}

//사용자로부터 정수 하나를 입력 받아, 해당하는 구구단을 출력하는 프로그램(L)
