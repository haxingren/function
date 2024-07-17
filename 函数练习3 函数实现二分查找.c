#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int binary_search(int arr[], int x, int y)
//当传参数组给函数时，传的其实是数组首元素的地址，函数通过地址来找到数组，所以在函数里面是无法计算数组个数的
//形参arr[]看起来是数组，本质上是指针变量
{
	int left = 0;
	int right = y - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (x < arr[mid])
		{
			right = mid - 1;
		}
		else if (x > arr[mid])
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	//if (left > right)
		return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 71;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//如果找到，返回下标
	//找不到返回-1
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("unfound\n");
	}
	else
		printf("found, subscript is %d\n", ret);
	return 0;
}