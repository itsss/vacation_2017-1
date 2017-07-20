#include <stdio.h>

int main()
{
	int a, start, end, i, j, cnt=2, carry=1;
	scanf("%d", &a);
	start = ((a == 1 || a == 2) ? 0 : 9*(a-2));
	end = (a == 1 ? 72 : (a == 2 ? 9 : start+9));
	
	for(i = start, j = 2 ; i < end; i++)
	{
		printf("%d*%d=%d ", (a == 1 ? cnt : (i/9)+2), (a == 1 ? carry : i%9+1), (a == 1 ? cnt : (i/9)+2) * (a == 1 ? carry : i%9+1));
		if(a != 1) printf("\n");
		else
		{
			if(cnt == 9)
			{
				cnt = 1;
				carry++;
				printf("\n");
			}
			cnt++;
		}
	}
}
/*

#include <stdio.h>

int print(int a, int b)
{
	printf("%d*%d=%d ", a, b, a*b);
}

int main()
{
	int a, j=1, i=2;
	scanf("%d", &a);
	
	if(a == 1)
	{
		for(i = 2; i < 9, j < 9; i++) //for¹® 1°³  
		{
			print(i, j);
			if(i % 9 == 0)
			{
				printf("\n");
				i = 1;
				j++;
			}
		}
	}
	else for(int i = 1; i<10; i++)
	{
		print(a, i);
		printf("\n");
	}
}*/
