#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main( void)
{
   char a[5];
   int idx;
   
   scanf("%s", a);
  
   for (idx= 0; idx < 5; idx++)
   {
      a[idx] = (char)toupper(a[idx]);
   }
   printf( "%s\n", a);
   return 0;
}
