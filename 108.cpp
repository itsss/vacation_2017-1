#include <stdio.h>

int main()
{
	int y;
	scanf("%d", &y);
	
	if(y % 400 == 0) printf("Leap");
	else if((y%4 == 0) && (y%100 == 0)) printf("Normal");
	else if((y%4 == 0) && (y%100 != 0)) printf("Leap");
	else printf("Normal");
	
	return 0;
}
