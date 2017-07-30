#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char arr[41];
	gets(arr);
	for(int i = 0; i < arr[i]; i++)
	{
		arr[i] = tolower(arr[i]);
	}
	for(int i = 0; arr[i]; i++)
	{
		if(arr[i] == 32) 
		{
			arr[i+1] = toupper(arr[i+1]);
		}
	}
	arr[0] = toupper(arr[0]);
	printf("%s", arr);
}

//각 단어의 첫 글자만을 대문자로, 나머지 영문자는 소문자로 바꾸어 출력
