#include <stdio.h>

int main()
{
	int n, i, j;
	long long int sum = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			sum += j;
		}
	}
	printf("%lld", sum);
}

//9214�� ���� ����, 1598(Test Case 4������ ������)
//9214 -> 130417167360 (Correct)
//���Ĺ��� %lld�� �� �Ἥ incorrect�� ������ ������ ����. sum�� long long���� �ϰ� �������� int�� 
