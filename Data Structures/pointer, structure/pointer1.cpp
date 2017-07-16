#include <stdio.h>

int main()
{
	int a; //a에는 쓰레기 값이 들어 있음 
	int *pa = &a; //pa에 a의 주소가 저장됨.
	*pa = 10; //pa가 가리키는 주소에 10 저장 
	
	printf("%d %x\n", a, &a);
	printf("%x %x", pa, &pa); 
}
