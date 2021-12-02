#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//指针数组，数组指针

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//const修饰指向常量字符串的指针
//
//	int* arr[10];//指针数组，int *[10]
//
//	int* p3;//整型指针，int*
//	char* p4;//字符指针，char*
//	int(*parr)[10];//数组指针，int[10] *
//	char* (*pa)[5];//数组指针，int *[5] *
//	int(*parr2[10])[5];//指针数组，  int[5] *[10]
//
//	return 0;
//}


//一维数组传参

//void test(int arr[])//OK
//{
//	;
//}
//
////void test(int arr[10])//OK，写错也没影响
////{
////	;
////}
////
////void test(int* arr)//OK
////{
////	;
////}
////
////void test2(int* arr[20])//OK，20可省略
////{
////	;
////}
//
//void test2(int** arr)//OK，前一个*表示指针指向的类型，后一个表示形参为指针，即arr是一个指向指针数组的指针
//{
//	;
//}
//
//int main()
//{
//	int arr[10] = { 0 };//int[10]
//	int* arr2[20] = { 0 };//int *[20]
//	test(arr);//传了整型数组，可以看作名，可以看作地址
//	test2(arr2);//传了整型指针数组
//
//	return 0;
//}



//二维数组传参

////void test(int arr[3][5])//Ok
////{
////	;
////}
////
////void test(int arr[][5])//OK，可省略行
////{
////	;
////}
//
////void test(int* arr)//警告，子数组地址不可放进整型指针
////{
////	;
////}
//
////void test(int** arr)//依然不对
////{
////	;
////}
//
//void test(int(*arr)[5])//子数组地址要放进子数组类型的指针中，子数组类型为int[5]，则传参类型为int[5] * 
//{
//	;
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	int(*p)[5] = arr;//arr为子数组地址，子数组为int[5],则对应指针为int[5] *
//	int(*p1)[3][5] = &arr;//&arr为数组地址，数组类型为int[3][5],则对应指针为int[3][5] *
//	test(arr);
//	//test2(arr);
//
//	return 0;
//}



//假定函数形参为一级指针

//void test1(int* p)
//{
//	;
//}
//
//void test2(char* p)
//{
//	;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	test1(&a);
//	test1(pa);
//	char c = 'w';
//	char* pc = &c;
//	test2(&c);
//	test2(pc);
//
//	return 0;
//}

//假定函数形参为二级指针

//void test(int** pp)
//{
//	;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	//test(&& a);非法操作
//	test(&pa);
//	test(ppa);
//
//	int* arr[10];
//	test(arr);//arr为首元素地址，首元素为指针（地址），地址的地址作为二级指针
//
//	return 0;
//}