#include <stdio.h>

int main()
{
	int a=1, sum;
	while(1)
	{
		scanf("%d", &a);
		if(a==0) break;
		sum += a;
	}
	printf("%d", sum);
}

//입력 받은 모든 정수를 더하면서, 0이 입력되면 멈추고 그 합을 출력하는 프로그램을 작성하시오 (M)
