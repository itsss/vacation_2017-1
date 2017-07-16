#include <stdio.h>  
#include <math.h>
  
int main()  
{  
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    double x = (-b + (sqrt(b*b-4*a*c))) / (2*a);
    double y = (-b - (sqrt(b*b-4*a*c))) / (2*a);
    printf("%g", x+y);
}  
