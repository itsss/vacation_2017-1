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
	
	//�޸� �̹�ȯ �׽�Ʈ. malloc() �Լ��� ���� �޸� �Ҵ� �� free()�� �޸� ��ȯ�� ���� �ʾ���. 
}
