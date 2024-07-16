#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <string.h>
//函数（子程序），是一个大型程序中的某部分代码，由一个或多个语句块组成
//用于实现某种特定任务
//相较于其他代码，函数具备相对的独立性
//函数主要分为库函数和自定义函数
//库函数就是已经被设置好了的函数，只要引用就可以用
//常用的几种库函数：
//

int main()
{
	//库函数例子1：
	//strcpy需引用头文件<string.h>
	//表达式为strcpy(表达式1, 表达式2);
	//表达式2复制到表达式1
	//须确保表达式1有足够的内存
	char arr1[] = "hello world";
	char arr2[20] = { 0 };

	strcpy(arr2, arr1);
	printf("%s\n", arr2);

	//例子2：
	//memset
	//可以设置指定内存块的内容
	//表达式为memset(目标, 替换成什么, 替换几位);
	char arr3[] = "hello world!";
	//memset(arr3, 'a', 5);
	//也可以从中间开始设置
	memset(arr3+6, 'a', 5);
	printf("%s\n", arr3);
	return 0;
}