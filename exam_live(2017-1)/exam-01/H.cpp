#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	if(a >= 90) printf("A");
	else if(a >= 80) printf("B");
	else if(a >= 70) printf("C");
	else if(a >= 60) printf("D");
	else printf("F");
}

/*
사용자로부터 양의 정수 하나를 입력 받아서, 다음 조건에 알맞게 출력하시오.

입력 받은 양의 정수 하나가 a라고 가정할때,

a가 90보다 크거나 같은 경우: 'A'
a가 80보다 크거나 같은 경우: 'B'
a가 70보다 크거나 같은 경우: 'C'
a가 60보다 크거나 같은 경우: 'D'
a가 위 조건에 다 안 맞을 경우: 'F'
*/
