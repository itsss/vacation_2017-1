#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf("%s", (a/b) > (c/d) ? "ab" : "cd");
}

/*����ڷκ��� ���� ���� a, b, c, d �� �Է� �޾�
a/b c/d �� ũ�⸦ ���Ͽ�, 

a/b �� Ŭ ��� "ab" ��
c/d �� Ŭ ��� "cd" �� ����Ͻÿ�.*/
