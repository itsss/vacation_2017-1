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
   
   if(high >= (mid + low)) printf("Not");
   else if(a == b == c) printf("Regular"); //정사각형 
   else if((high*high) == ((low*low)+(mid*mid))) printf("Right"); //직각삼각형 
   else if (((low==mid) && (mid!=high)) || ((low==high) && (mid!=high)) || ((mid==high) && (low!=high))) printf("Isosceles"); //이등변삼각형  
   else printf("Normal");
}    
