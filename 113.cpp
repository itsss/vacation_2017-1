#include <stdio.h>  
#include <math.h>
  
int main()  
{  
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    
    int D = b*b - (4*a*c);
    
    if(D > 0)
    {
    	double x = (-b + (sqrt(b*b-4*a*c))) / (2*a);
    	double y = (-b - (sqrt(b*b-4*a*c))) / (2*a);
    	if(x < y)
    	{
    		printf("%g %g", y, x);
		}
		else printf("%g %g", x, y);
	}
    
    else if(D == 0)
    {
    	double x = (-b + (sqrt(b*b-4*a*c))) / (2*a);
    	printf("%g", x); //소수점 이하 필요없는 0을 제거하는 출력형식자는 %g
	}
	else printf("none.");
}  
