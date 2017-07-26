#include <stdio.h>

int main()
{
	int arr[16], att;
	for(int i = 1; i < 21; i++) 
	{
		scanf("%d", &att);
		arr[att] = 1;
	}
	for(int i = 1; i < 16; i++)
	{
		if(arr[i] != 1) printf("%d ", i);
	}
}

/*

OO학교에 근무하는 교사 O모씨는 수업시간에 출석을 확인할때, 
번호 순서대로 하지 않고 무작위로 확인한다고 한다.
1~15번까지 있는 1-7반에서 교사 OOO이 
무작위로 20번 번호를 부를때, 한번도 불리지 않은 번호를 모두 출력하시오.

*/
