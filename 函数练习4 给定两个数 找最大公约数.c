#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int HCF(int x, int y)
{
	int z = x<y?x:y;
	while (1)
	{
		if (x % z == 0 && y % z == 0)
			break;
		else
			z--;
	}
	return z;
}//暴力求解
//不够高效
//可以使用辗转相除法

int hcf(int a, int b)
{
	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	return b;
}

//最小公倍数
int lcm(int a, int b)
{
	return a* b / hcf(a, b);
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = hcf(a, b);
	int ret2 = lcm(a, b);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	return 0;
}