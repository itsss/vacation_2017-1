#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int find(int num) 
{
    int *arr;
    arr = (int *)malloc(sizeof(int) * num);
    int i = 2, cnt=1;

    for (i = 2; i <= num; i++) {
        arr[i] = i;
    }
    
    for (i = 2; i <= num; i++) { 
        if (arr[i] == 0) continue;
        for (int j = i + i; j <= num; j += i) { 
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
