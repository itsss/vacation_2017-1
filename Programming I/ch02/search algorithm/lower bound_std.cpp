#include <stdio.h>
#include <algorithm>

int n, k, data[1000001];

int main()
{
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++) scanf("%d", data+i);
	printf("%d\n", std::lower_bound(data, data+n, k) - data + 1 ); 
	
	//A[0]~A[n-1]에서 k의 위치 구하기, 
	//그 주소에서 A를 빼면 k가 존재하는 배열 A의 인덱스, 배열의 인덱스는 0부터 시작, 1 더해주기 
}
