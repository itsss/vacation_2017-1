#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	printf("0~44\n");
	for(int i = 1; i <= 45; i++)
	{
		int r = rand()%45; //0���� 44���� �������� 
		printf("%d ", r);
	}
	
	printf("\n\n1~16 \n");
	for(int i = 1; i <= 16; i++)
	{
		int r = (rand()%16) + 1; //1���� 16���� ��������
		printf("%d ", r); 
	}
}
