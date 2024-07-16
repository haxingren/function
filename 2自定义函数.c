#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//自定义函数
//包含了函数的返回类型，函数名，函数的参数，语句项



//例子1对比大小的函数
int comp(int x, int y)
{
	return x > y ? x : y;
}
//函数的返回类型根据需求选择
//如果不需要返回值就使用void
void test()
{
	printf("Haha\n");
}



//例子2交换两个整型变量的函数
//函数里设置的参数，x,y叫做形式参数（形参）
//void swapt_value(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//当实参传给形参时，形参是实参的一份临时拷贝，有自己的独立空间
//对形参的修改不会影响实参
void swapt_value(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}
//当需要函数通过改变内部的变量，对外部变量进行改变，就需要传地址



int main()
{
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int larger = comp(a, b);
	//printf("%d\n", larger);



	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	//swapt_value(a, b);
	//这里传给函数的叫做实参
	swapt_value(&a, &b);
	printf("%d %d\n", a, b);
}

