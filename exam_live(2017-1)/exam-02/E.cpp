#include <stdio.h>

int main()
{
	char a;
	scanf("%c", &a);
	switch(a)
	{
		case 'A':
			printf("1���");
			break;
			
		case 'B':
			printf("2���");
			break;
		case 'C':
			printf("3���");
			break;
		default:
			printf("��޿�");
	}
}

/*switch���� Ȱ���Ͽ� 
����ڷκ��� A, B, C�� �Է� �޾� ���� 1���, 2���, 3��� �ϰ�, 
����ڰ� A, B, C �� �ƴ� �ٸ����� �Է��ϸ� ��޿� ����ϱ�*/ 
