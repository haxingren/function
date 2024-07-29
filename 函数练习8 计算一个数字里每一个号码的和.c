#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int DigitSum(int n)
{
	if (n > 9)
		return (n % 10) + DigitSum(n / 10);
	else
		return n;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d\n", ret);
	return 0;
}