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

//�� �ܾ��� ù ���ڸ��� �빮�ڷ�, ������ �����ڴ� �ҹ��ڷ� �ٲپ� ���
