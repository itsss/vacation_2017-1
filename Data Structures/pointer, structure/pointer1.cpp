#include <stdio.h>

int main()
{
	int a; //a���� ������ ���� ��� ���� 
	int *pa = &a; //pa�� a�� �ּҰ� �����.
	*pa = 10; //pa�� ����Ű�� �ּҿ� 10 ���� 
	
	printf("%d %x\n", a, &a);
	printf("%x %x", pa, &pa); 
}
