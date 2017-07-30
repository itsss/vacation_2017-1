#include <stdio.h>

int main()
{
	int a[3], tmp;
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4 - i; j++)
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	
	for(int i = 0; i < 3; i++) printf("%d ", a[i]);
} 

//정수 3개를 크기순 출력 
