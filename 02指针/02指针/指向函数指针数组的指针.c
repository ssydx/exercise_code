#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[5] = { 0 };//数组
//	int(*pa)[5] = &arr;//指向数组的指针，类型为int[10] *
//
//	int n = 0;
//	int*pn[5] = { &n };//指针数组，类型为int *[5]，数组，指针，整型
//	int(*(*ppn))[5] = &pn;//指向指针数组的指针，类型为int *[5] *，指针，数组，指针，整型
//
//	int(*pf[5])(int, int) = { add };//函数指针数组，类型为int(*)(int,int)[5]，数组，指针，函数
//	int(*(*ppf)[5])(int, int) = &pf;//指向函数指针数组的指针，类型为int(*)(int,int)[5] *，指针，数组，指针，函数
//	return 0;
//}