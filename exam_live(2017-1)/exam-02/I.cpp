#include <stdio.h>
#include <string.h>

int main()
{
	char arr[50];
	int key1=0, key2=0, keyfor1=0, keyfor2=0, keyfor3=0, keyfor4=0, cnt=0;
	scanf("%s", arr);
	
	if(strlen(arr) >= 8) key1++;
	for(int i = 0; i < strlen(arr); i++)
	{
		if(arr[i] >= 65 && arr[i] <= 90) keyfor1++;
		else if(arr[i] >= 97 && arr[i] <= 122) keyfor2++;
		else if(arr[i] >= 48 && arr[i] <= 57) keyfor3++;
		else if(arr[i] >= 33 && arr[i] <= 39) keyfor4++; 
	}
	if(keyfor1 == 0) cnt++;
	if(keyfor2 == 0) cnt++;
	if(keyfor3 == 0) cnt++;
	if(keyfor4 == 0) cnt++;
	
	if(keyfor1+keyfor2+keyfor3+keyfor4 == strlen(arr) && cnt <= 2) printf("YES");
	else printf("NO");
} 

/*

������ �����ǰ� �ִ�. �Է��� ��й�ȣ�� ���ռ��� ������ ����� �������.


��й�ȣ�� ������ ������ ��� �����ؾ� �Ѵ�.

1. ���̴� 8�� �̻�

2. ���� 4 ���� �׷����θ� �̷������ �Ѵ�.
 ��  ������ �빮�� 
 ��  ������ �ҹ��� 
 ��  ���� 
 ��  ! " # $ % & '  (ASCII 33 ~ 39)

3. �� 4 ���� �׷� �� 2���� �̻� ���յǾ�� �Ѵ�.

*/
