#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void reverse_string(char arr[], int sz, int i)
{
	if ((sz - i) > i)
	{
		char tmp = arr[sz - i];
		arr[sz - i] = arr[i];
		arr[i] = tmp;
		i++;
		reverse_string(arr, sz, i);
	}
}


//只使用一个参数
void reverse(char* str)
{
	int len = strlen(str) - 1;
	char tmp = *str;
	*str = *(str + len);
	*(str + len) = '\0';
	if (strlen((str + 1)) >= 2)
	{
		reverse(str + 1);
	}
	*(str + len) = tmp;
}
int main()
{
	char arr[] = { "abcdef" };
	int sz = (sizeof(arr) / sizeof(arr[0])) - 2;
	int i = 0;
	printf("%d\n", sz);
	//reverse_string(arr, sz, i);
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}