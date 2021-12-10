#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//C99规定结构体的最后一个成员(至少两个成员)可以是大小未知的数组(两种写法)
//利用指针也可以创造动态数组
//柔性数组的好处是开辟空间连续(结构体各部分在一起),访问效率更高(局部性原理)同时有益于减少内存碎片,且方便内存释放

//柔性数组

//struct S
//{
//	int n;
//	int arr[];
//};

//struct S
//{
//	int n;
//	int arr[0];
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(struct S));//柔性数组的大小不计算在内
//
//	//首次开辟
//	struct S* ps = (struct S*) malloc(sizeof(struct S) + 5 * sizeof(int));
//	//字节总数=结构体字节数+需要的柔性数组的大小
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//再次开辟
//	struct S* ptr = realloc(ps, 44);
//	if (ptr)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放空间
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//其他方式

//struct S
//{
//	int n;
//	int* parr;//注意一维数组此处是整型指针,而不是整型数组指针
//};

//int main(void)//仅数组部分动态开辟
//{
//	struct S s = { 0 };
//	s.parr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		s.parr[i] = i;
//	}
//	int* ptr = realloc(s.parr, 10 * sizeof(int));
//	if (ptr)
//	{
//		s.parr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		s.parr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s.parr[i]);
//	}
//	free(s.parr);
//	s.parr = NULL;
//	return 0;
//}

//int main(void)
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));//结构体也动态开辟
//	ps->parr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->parr[i] = i;
//	}
//	int* ptr = realloc(ps->parr, 10 * sizeof(int));
//	if (ptr)
//	{
//		ps->parr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->parr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->parr[i]);
//	}
//	free(ps->parr);
//	ps->parr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}