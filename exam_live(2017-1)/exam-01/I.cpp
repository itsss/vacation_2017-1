#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	switch(a)
	{
		case 12:
		case 1:
		case 2:
			printf("winter");
			break;
		case 3:
		case 4:
		case 5:
			printf("spring");
			break;
		case 6:
		case 7:
		case 8:
			printf("summer");
			break;
		case 9:
		case 10:
		case 11:
			printf("fall");
			break;
	}
}

//����ڷκ��� ������� �Է� �޾�, �ش� ������ ����� ����Ͻÿ� (12-2 winter, 3-5 spring, 6-8 summer, 9-11 fall)
