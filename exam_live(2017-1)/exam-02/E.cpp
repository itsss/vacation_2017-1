#include <stdio.h>

int main()
{
	char a;
	scanf("%c", &a);
	switch(a)
	{
		case 'A':
			printf("1등급");
			break;
			
		case 'B':
			printf("2등급");
			break;
		case 'C':
			printf("3등급");
			break;
		default:
			printf("등급외");
	}
}

/*switch문을 활용하여 
사용자로부터 A, B, C를 입력 받아 각각 1등급, 2등급, 3등급 하고, 
사용자가 A, B, C 가 아닌 다른것을 입력하면 등급외 출력하기*/ 
