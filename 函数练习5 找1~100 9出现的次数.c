#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int find_9()
{
	int n = 1;
	int i = 0;
	while (n <= 100)
	{
		if (n % 10 == 9)
			i++;
		if (n/10==9)
			i++;
		n++;
	}
	return i;
}
int main()
{
	int ret = find_9();
	printf("%d\n", ret);
	return 0;
}