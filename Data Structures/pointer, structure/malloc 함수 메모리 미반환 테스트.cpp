#include <stdio.h>
#include <stdlib.h>

void f(int n)
{
	int *p = (int *)malloc(sizeof(int)*n);
	if(p == NULL) printf("error\n");
	//free(p);
}

int main()
{
	int i, n = 100000000;
	for(i=0;i<100000;i++)
	{
		if(i%5000==0) printf("%d\n", i);
		f(n);
	}
	return 0;
	
	//메모리 미반환 테스트. malloc() 함수로 동적 메모리 할당 후 free()로 메모리 반환을 하지 않았음. 
}
