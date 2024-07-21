#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double CAL(int i)
{
	double n = 1.0 / i;
	if (i <= 100)
		if (i % 2 == 1)
			return n - CAL(i + 1);
		else
			return n + CAL(i + 1);

	else
		return 0;
}

double cal(int i)
{
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + flag * (1.0 / i);
		flag = -flag;
	}
	return sum;
}
int main()
{
	double ret = CAL(1);
	double ret2 = cal(1);
	printf("%lf\n", ret);
	printf("%lf\n", ret2);
	return;
}