#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


#define n 10
int arr3[n];//define形式定义，可用于数组

//定义：分配内存空间
//声明：可能已经在别处分配了内存空间，也可能没有分配内存空间（只是占用一个标识符）
//初始化：给变量赋值，尽量给变量都做初始化

//数组定义与初始化

//const int m = 10;
//int arr4[m];const形式不可用于数组

//int main()
//{
//	//整型数组
//	int arr1[10];//定义
//	int arr2[] = { 0,1,2,3,4,5,6,7,8,9 };//定义并初始化，元素个数即初始化的个数
//	int arr4[10] = { 1,2,3 };//定义并不完全初始化，未初始化的默认为0
//	int arr5[10] = { 1,2,3,4,5,6,7,8,9,0 };//完全初始化
//
//	//字符型数组
//	char arr6[10] = { 'a','b','c' };//数组的前三个元素被赋值
//	char arr7[10] = "abc";//虽然这两种方式的存储相同，但实际该数组是前四个元素被赋值
//						  //只不过第四个元素赋值恰好为\0
//
//	// 以下对比可说明区别
//	char arr8[] = { 'a','b','c' };
//	char arr9[] = "abc";
//	printf("%d\n", sizeof(arr9));//计算\0，输出4
//	printf("%d\n", strlen(arr9));//不计算\0，输出3
//	printf("%d\n", sizeof(arr8));//仅计算元素个数，输出3
//	printf("%d\n", strlen(arr8));//遇\0才停止，该数组无\0输出结果未知
//
//	return 0;
//}



//一维数组

//int main()
//{
//	//char arr[] = "abcdef";
//	//int i = 0;
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	//printf("%d\n", sz);//七个元素，但\0不打印，因此打印六个元素
//	//int sz1 =(int) strlen(arr);//字符串长度为6，sz1为无符号数，最好强制类型转换为整型
//	//printf("%d\n", sz1);
//	//for (i = 0; i < sz1; i++)//打印到下标为5的元素，sz1=sz-1
//	//{
//	//	printf("%c\n", arr[i]);
//	//}
//
//	//char arr[] = { 1,2,3,4,5,6 };
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)//sz不必减一
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//return 0;
//}



//一维数组的地址

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//数组元素连续存放，整型数组两个元素地址差为4，也就是一个元素的大小
//	}
//	printf("&arr = %p\n", &arr);//数组地址为首元素地址
//	return 0;
//}



//二维数组

//int main()
//{
//	//定义
//	int arr1[3][5];//前行后列
//
//	//初始化
//	int arr2[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//完全初始化
//	int arr3[3][3] = { 1,2,3,4,5,6,7,8,9 };//完全初始化
//	int arr4[3][3] = { {1,2},{3,4}, 5 };//不完全初始化，首行1,2,0，次行3,4,0，末行5,0,0
//	int arr5[3][3] = { 1,2,3,4,5 };//不完全初始化，首行1,2,3，次行4,5,0，末行0,0,0
//
//	//与一维的差异
//	//int arr6[][] = { {1,2,3},{4,5,6},{7,8,9} };行列无论如何都不可同时省略
//	//int arr6[][] = { 1,2,3,4,5 };行列无论如何都不可同时省略
//	int arr7[][3] = { 1,2,3,4,5 };//初始化时列可以省略，行无论如何都不可以省略
//
//	int i = 0;
//	for (i = 0; i < 3; i++)//打印第i行
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)//打印第j列
//		{
//			printf("%d ", arr3[i][j]);
//		}
//		printf("\n");//每打印一行就换行
//	}
//	return 0;
//}

//二维数组的地址

//int main()
//{
//	int arr[5][5] = { 1,2,34,5,67,78,99,0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)//打印第i行
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)//打印第j列
//		{
//			printf("&arr[%d][%d] = %p   ", i, j, &arr[i][j]);//依然是连续存放的
//		}
//		printf("&arr[%d] = %p\n", i, &arr[i]);//arr[i]都是该行首元素的地址
//	}
//	printf("&arr = %p\n", &arr);//arr是数组的首元素地址
//	return 0;
//}