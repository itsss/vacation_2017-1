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
   
   if(high >= (mid + low)) printf("Not");
   else if(a == b == c) printf("Regular"); //���簢�� 
   else if((high*high) == ((low*low)+(mid*mid))) printf("Right"); //�����ﰢ�� 
   else if (((low==mid) && (mid!=high)) || ((low==high) && (mid!=high)) || ((mid==high) && (low!=high))) printf("Isosceles"); //�̵�ﰢ��  
   else printf("Normal");
}    
