#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void Add(int* x)
{
	(*x)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d", num);
	return 0;
}