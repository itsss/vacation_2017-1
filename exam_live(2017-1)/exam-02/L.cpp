#include <stdio.h>

int fibo(int n)
{
   if (n == 0) return 0;
   else if (n == 1) return 1;
   else return ( fibo(n-1) + fibo(n-2) );
}

int main()
{
	int n, i=0;
	scanf("%d", &n);
	for(int j = 1; j <= n; j++)
	{
		if(fibo(i) < n) printf("%d ", fibo(i));
		i++;
	}
}

/*#include <stdio.h>

int main()
{
	int n, a = 0, b = 1, nxt;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		if(c <= 1) nxt = c;
		else
		{
			nxt = a + b;
			a = b;
			b = nxt;
		}
		printf("%d ", nxt);
	}
	return 0;
}

#include <stdio.h>

int main()
{
	int n, a = 0, b = 1, nxt=0;
	scanf("%d", &n);
	
	for(int c = 0; nxt < n; c++)
	{
		if(c <= 1) nxt = c;
		else
		{
			nxt = a + b;
			a = b;
			b = nxt;
		}
		if(nxt <= n) printf("%d ", nxt);
		else ;
	}
	return 0;
}
*/
