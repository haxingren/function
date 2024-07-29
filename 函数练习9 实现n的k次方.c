#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double PowerN(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
		return n * PowerN(n, k - 1);
	else
		return 1.0 / PowerN(n, -k);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = PowerN(n, k);
	printf("%lf\n", ret);
	return 0;
}