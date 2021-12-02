#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//int main()
//{
//	//int arr[10] = { 0 };//整型数组，类型为int[10]
//	//char ch[5] = { 0 };//字符数组
//	//int* parr[4];//整型指针数组
//	//char* pch[5];//字符指针数组
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int d = 40;
//	//int* arr[4] = { &a,&b,&c,&d };//类型为int *[4]
//	//int i = 0;
//	//for (i = 0; i < 4; i++)
//	//{
//	//	printf("%d\n", *arr[i]);//对指针数组的每个元素进行解引用
//	//}
//
//	//用法
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)//打印每行
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));//打印每行的每个元素，paar[i]为每行首元素地址，+j后得到该行每个元素地址
//										  //解引用找到每个元素
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < 3; i++)//打印每行
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);//打印每行的每个元素，parr[i]也是每个数组名，parr[i][j]后得到该行每个元素地址
//										  //解引用找到每个元素
//		}
//		printf("\n");
//	}
//
//	return 0;
//}