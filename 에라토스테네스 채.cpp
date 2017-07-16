#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int find(int num) 
{
    int *arr;
    arr = (int *)malloc(sizeof(int) * num);
    int i = 2, cnt=1;

    // 입력받은 수 만큼 배열에 모두 초기화 해둔다
    for (i = 2; i <= num; i++) {
        arr[i] = i;
    }
    
    for (i = 2; i <= num; i++) { 
        if (arr[i] == 0) continue;
        for (int j = i + i; j <= num; j += i) { // i를 제외한 i의 배수들은 0으로 체크
            arr[j] = 0;
        }
    }

    // print
	for (i = 2; i <= 1000000; i++) 
	{
        if (arr[i] != 0)
		{
			if(cnt == 12345) printf("%d", arr[132241]);
		} 
    }
}

int main()
{
	find(10000000);
}
