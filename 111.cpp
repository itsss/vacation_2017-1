#include <stdio.h>

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

//����(����) �����ڷ� max, min ���� 
int main()
{
   int a, b, c;
   int high;
   int low;

   scanf("%d %d %d", &a, &b, &c);

   low = min(min(a, b), c);
   high = max(max(a, b), c);
   int mid = a + b + c - low - high;
   
   if(low == high || high == mid || low == mid ) printf("Impossible");
   else printf("%d %d %d", low, mid, high);

}    
