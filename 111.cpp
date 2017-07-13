#include <stdio.h>

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

//삼항(조건) 연산자로 max, min 정의 
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
