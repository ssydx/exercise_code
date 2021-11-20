#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//数组名在sizeof(arr)时表示数组的大小
//取地址数组名时取出的整个数组的地址，但形式依然是首元素地址
//其余情况数组名都是首元素地址

//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%p\n", arr);//首元素地址
//	printf("%p\n", arr+1);//第二个元素的地址
//	printf("%p\n", arr[0]);//首元素地址
//	printf("%p\n", arr[0]+1);//第二个元素的地址
//	printf("%p\n", &arr);//数组的地址，形式为首元素地址
//	printf("%p\n", &arr+1);//数组之后的地址，首元素地址+元素个数*元素大小
//	return 0;
//}


//冒泡排序，时间复杂度O(n^2)
//1n个元素需要n-1趟
//2需要排序的元素每一趟都在递减（首趟需要比较n-1对，第二趟需要比较n-2对）
//3当某一趟未发生次序交换时则不再进行下一趟排序

//void bubble_sort(int arr[], int sz)//一维数组形参可省略元素个数，但不可省略[]，二维数组只能省略行数
//{
//	int i = 0;//趟数
//	for (i = 0; i < sz - 1; i++)//对前n-1个元素排序（当n-1个元素排序后剩下一个自然是最小的首元素）
//								//即需要n-1趟
//	{
//		int j = 0;//每一趟
//		int flag = 1;//假定已经升序
//		for (j = 0; j < sz-i-1; j++)//需要排序的元素在递减，动态变化
//		{
//			if (arr[j] > arr[j + 1])//比较相邻元素大小
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//只要有一次交换flag就为0
//			}
//		}
//		if (flag)//当本次循环flag始终为1，即本次未进行次序交换（已满足升序），则跳出循环
//		{
//			break;
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 1,0,2,3,4,3,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//数组不需要取地址，数组名天然就是首元素地址
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}