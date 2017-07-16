#include <stdio.h>

struct Point
{
	int x;
	int y;
};

int main()
{
	struct Point p1;
	p1 = {0, 0}; //reset
	printf("p1=(%d, %d)\n", p1.x, p1.y);
	
	scanf("%d %d", &p1.x, &p1.y);//input
	printf("p1=(%d, %d)\n", p1.x, p1.y);
	
	return 0;
}
