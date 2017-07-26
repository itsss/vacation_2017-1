#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf("%s", (a/b) > (c/d) ? "ab" : "cd");
}

/*사용자로부터 양의 정수 a, b, c, d 를 입력 받아
a/b c/d 의 크기를 비교하여, 

a/b 가 클 경우 "ab" 를
c/d 가 클 경우 "cd" 를 출력하시오.*/
