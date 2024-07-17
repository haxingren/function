#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void prime_num(int x)
{
	int n = 0;
	for (n = 2; n <= x - 1; n++)
	{
		if (x % n == 0)
		{
			printf("not prime number\n");
			break;
		}
	}
	if (n == x)
	{
		printf("prime number\n");
	}

}//我的尝试
//大体成功，但是无法判断1和0


//void prime_number2(int x)
//{
//	int flag = 1;//1时是质数，0时不是
//	int n = 0;
//	for (n = 2; n <= x - 1; n++)
//	{
//		if (x % n == 0)//不是质数
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("not a prime number\n");
//	}
//	else
//		printf("prime number\n");
//}//范例 通过默认输入的就是质数，当判断不是质数才修改，规避了无法判断1和0的问题

#include <math.h>
//srqt(), 是个数学库函数，引用头文件<math.h>
//用于开平方
void prime_number2(int x)
{
	int flag = 1;//1时是质数，0时不是
	int n = 0;
	for (n = 2; n <= sqrt(x); n++)//只要x的开平方前一个因数都没有，那么x就是质数
	{
		if (x % n == 0)//不是质数
		{
			flag = 0;
			break;
		}
	}
	if (flag == 0)
	{
		printf("not a prime number\n");
	}
	else
		printf("prime number\n");
}//另一种逻辑
int main()
{
	int input = 0;
	scanf("%d", &input);
	prime_number2(input);

	return 0;
}



