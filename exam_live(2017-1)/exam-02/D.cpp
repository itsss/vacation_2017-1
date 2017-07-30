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

//점수 평가하여 등급 산출 
