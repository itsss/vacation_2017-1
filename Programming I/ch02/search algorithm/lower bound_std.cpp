#include <stdio.h>
#include <algorithm>

int n, k, data[1000001];

int main()
{
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++) scanf("%d", data+i);
	printf("%d\n", std::lower_bound(data, data+n, k) - data + 1 ); 
	
	//A[0]~A[n-1]���� k�� ��ġ ���ϱ�, 
	//�� �ּҿ��� A�� ���� k�� �����ϴ� �迭 A�� �ε���, �迭�� �ε����� 0���� ����, 1 �����ֱ� 
}
