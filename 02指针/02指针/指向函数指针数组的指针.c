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
//	int arr[5] = { 0 };//����
//	int(*pa)[5] = &arr;//ָ�������ָ�룬����Ϊint[10] *
//
//	int n = 0;
//	int*pn[5] = { &n };//ָ�����飬����Ϊint *[5]�����飬ָ�룬����
//	int(*(*ppn))[5] = &pn;//ָ��ָ�������ָ�룬����Ϊint *[5] *��ָ�룬���飬ָ�룬����
//
//	int(*pf[5])(int, int) = { add };//����ָ�����飬����Ϊint(*)(int,int)[5]�����飬ָ�룬����
//	int(*(*ppf)[5])(int, int) = &pf;//ָ����ָ�������ָ�룬����Ϊint(*)(int,int)[5] *��ָ�룬���飬ָ�룬����
//	return 0;
//}