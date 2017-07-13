#include <stdio.h>

int main()
{
	int *num;
	int num1 = 12345;
	num = &num1;
	
	printf("before num1 %d\n", num1);
	printf("after num1 %d\n", *num);
	
	*num = 54321;
	printf("before num %d\n", num1);
	printf("after num %d\n", *num);
	
	printf("address num %p\n", num);
	printf("address num1 %p", &num1);
	
	//pointer basics
}
