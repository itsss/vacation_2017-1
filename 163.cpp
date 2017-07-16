#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main( void)
{
   char a[5];
   int idx, key;
   
   scanf("%d %s", &key, a);
  
   for (idx= 0; idx < 8; idx++)
   {
      a[idx] = a[idx] + key;
   }
   printf( "%s\n", a);
   return 0;
}
