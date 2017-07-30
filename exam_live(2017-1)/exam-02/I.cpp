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

보안이 강조되고 있다. 입력한 비밀번호의 적합성을 따져서 결과를 출력하자.


비밀번호는 다음의 조건을 모두 만족해야 한다.

1. 길이는 8자 이상

2. 다음 4 가지 그룹으로만 이루어져야 한다.
 ⓐ  영문자 대문자 
 ⓑ  영문자 소문자 
 ⓒ  숫자 
 ⓓ  ! " # $ % & '  (ASCII 33 ~ 39)

3. 위 4 가지 그룹 중 2가지 이상 조합되어야 한다.

*/
