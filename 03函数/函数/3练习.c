#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//判断素数

//int is_prime(int n)//函数体内不要有多余操作，比如打印等
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)//模无余数即被整除，说明不是素数
//			return 0;//结束函数调用
//	}
//	return 1;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//判断闰年

//int is_leapyear(int year)
//{
//	if((year%4==0 && year%100 != 0) || (year%400 == 0))
//		return 1;//返回1则不再执行以下代码
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leapyear(year) == 1)
//			printf("%d年是闰年\n", year);
//	}
//	return 0;
//}


//有序数组查找
//1arr元素个数要事先求出，2下标交错时查不到，3下标改变要±1

//int binary_search(int arr[],int sz,int num)//arr传入的是数组首元素的地址
//{										   //在函数内部使用sizeof(arr)求出的是地址大小4，sz无法求出元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	int mid = (left + right) / 2;//中间下标
//	while (left<=right)//下标交错时说明查找不到
//	{
//		if (arr[mid] < num)
//		{
//			left = mid + 1;//必须加一
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid - 1;//必须减一
//		}
//		else
//		{
//			return mid;
//		}
//		mid = (left + right) / 2;
//	}
//	return -1;
//}

//int main()
//{
//	int num = 9;
//	int arr[] = { 1,3,4,5,6,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,sz,num);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//	return 0;
//}


//使某数字加一

//void Add(int* pnum)
//{
//	(*pnum)++;//++的优先级较高
//}

//int main()
//{
//	int num = 0;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//嵌套调用

//void new_line()
//{
//	printf("hahahaha\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//		new_line();
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}


//链式访问

//int main()
//{
//	//int len = 0;
//	//printf("%d\n", strlen("hello world"));
//	
//	printf("%d", printf("%d", printf("%d", 43)));//打印出4321，printf的返回值为打印的字符个数
//	
//	return 0;
//}