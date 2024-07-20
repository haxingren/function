#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//循环与迭代
//循环是一种迭代，但迭代不仅是循环


//练习 找n的阶乘

//递归的方式
int factorial(int n)
{
	if (n > 1)
	{
		return n * factorial(n - 1);
	}
	else
		return 1;
}

//迭代的方式
int fac(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}


//练习 找第n个斐波那契数
//1 1 2 3 5 8 13 21

//递归的方法
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}
//可行，但是数字越大，运算过程越长，运行速度极慢，没有效率
 

//迭代的方法
int feb(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 1; i <= n-2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}//同样可行，并且非常直接的计算，所以效率更高，当然数字 太大会溢出


//因此，对于递归使用层次太深的，造成栈区溢出的情况，我们有两种方式处理
//1 不使用递归，使用迭代的方法处理
//2 使用static对象来替代nonstatic的局部对象，这样就可以将一部分栈区的内存需求转到静态区，当然层次过大溢出也还是无法避免
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = factorial(n);
	int ret2 = fac(n);
	int ret3 = fib(n);
	//printf("%d\n", ret);
	//printf("%d\n", ret2);

	printf("%d\n", ret3);
	return 0;
}